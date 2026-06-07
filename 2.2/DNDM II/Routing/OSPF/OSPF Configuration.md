```cisco
R1(config)# router ospf 1
R1(config-router)# router-id 1.1.1.1
R1(config-router)# network 10.0.12.0 0.0.0.3 area 0
```
The process id is not really important and two OSPF enabled routers with different OSPF process ids can communicate to each other.
After a router selects a router ID, an active OSPF router does not allow the router ID to be changed until the router is reloaded or the OSPF process is reset.
```cisco
R1# clear ip ospf process
```

Clearing the OSPF process is the preferred method to reset the router ID.
If you want to use a loopback interface you should type
```cisco
R1(config-if)# interface Loopback 1
R1(config-if)# ip address 1.1.1.1 255.255.255.255
R1(config-if)# end
```
By default, OSPF messages are forwarded out all OSPF-enabled interfaces. However, these messages only need to be sent out interfaces that are connecting to other OSPF-enabled routers.
To stop OSPF hello messages from being sent out from a specific interface type:
```cisco
passive-interface <interface>
```
To advertise a default route in OSPF type:
configure a default route first
```shell
ip route 0.0.0.0 0.0.0.0 203.0.113.2
```
Advertise the default route
```cisco
default-information originate
```
To display the OSPF configuration for an interface type
```cisco
show ip ospf interface FastEthernet2/0
show ip ospf interface g0/0/0
```
By default cost is calculated dividing a default reference bandwidth(10mbps) and if the result is less than zero then it is takes a cost of 1. This makes FastEthernet equal to GigabitEthernet and equal to 10 GigabitEthernet which not ideal.
Therefore you should change the reference bandwidth to 100 megabits per second i.e
```cisco
(config-router)auto-cost reference-bandwidth <megabits-per-second>
```
To change the OSPF cost type
```cisco
R1(config)# interface GigabitEthernet 0/0/0
R1(config-if)# ip ospf cost <1-2^16>
```
You can also change the cost by changing the bandwidth because $\text{cost}=\frac{\text{reference bandwidth}}{\text{bandwidth}}$  but this is not recommended because bandwidth is used in other calculations.
It is recommended you instead change the reference bandwidth.
```cisco
(config-if)bandwidth <1-10000000 Bandidth in kb/s>
```
The loopback interfaces have a default cost of 1.
To change the default timer type and dead timer
```cisco
int g0/0/0
ip ospf hello-timeout 45
ip ospf dead-timeout 45
```
Use the no ip ospf hello-interval and no ip ospf dead-interval commands to reset the intervals to their default.
To configure OSPF directly on the interface, use the ip ospf interface configuration mode command.
```cisco
R1(config-if)# ip ospf <procces-id> area <area-id>
```
Remove the network commands using the no form of the command. Then go to each interface and configure the ip ospf command
```cisco
router ospf 10
no network 10.0.1.1 0.0.0.0 area 0
no network 10.1.1.5 0.0.0.0 area 0
no network 10.1.1.14 0.0.0.0 area 0
int GigabitEthernet 0/0/0
ip ospf area 0
int GigabitEthernet 0/0/1
ip ospf area 0
int Loopback 0
ip ospf area 0
```
By default, Cisco routers elect a DR and BDR on Ethernet interfaces, even if there is only one other device on the link.
The DR/ BDR election process is unnecessary as there can only be two routers on the point-to-point network between R1 and R2.
To change this to a point-to-point network, use the interface configuration command ip ospf network point-to-point
```cisco
interface GigabitEthernet 0/0/0
ip ospf network point-to-point
```
To change the interface priority type( default is 1)
```cisco
interface Gigabit Ethernet 0/0/0
ip ospf priority 255
```

To enable plaintext authentication type
```cisco
area <area-id> authenticaton
```
To set the plaintext password type
```cisco
ip ospf authentication-key <password>
```
The interface paramater command i.e
```cisco
ip ospf authentication
```
sets plaintext authentication only on the interface.
To enable md5 authentication type
```cisco
area <area-id> authentication message-digest
```
The interface parameter command
```cisco
ip ospf authentication-key <message-digest>
```
The interface parameter command 
```cisco
ip ospf message-digest-key <key-number> md5 <password>
```
sets the MD5 password.
## OSPFv3 
create an OSPFv3 process
```cisco
ipv6 router ospf <process-id>
router-id 1.1.1.1
```
Add router interfaces to the ospf process created
```cisco
int GigabitEthernet 0/0/0
ipv6 ospf <process-id> area <area-id>
```