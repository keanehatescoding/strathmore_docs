## Static NAT
There are two basic tasks when configuring static NAT
translations:
1. Create a mapping between the inside local address and the inside global addresses using
```cisco
R1(config-if)# ip nat inside source static 192.168.10.254 209.165.201.5
```
2. The interfaces participating in the translation are configured as inside or outside relative to NAT with the ```ip nat inside``` and ```ip nat outside``` commands i.e
```cisco
R1(config)# interface serial 0/1/0
R1(config-if)# ip address 192.168.1.2 255.255.255.252
R1(config-if)# ip nat inside
R1(config)# interface serial 0/1/1
R1(config-if)# ip address 209.165.200.1 255.255.255.252
R1(config-if)# ip nat outside
```
To verify static nat the following commands may be useful
```cisco
R1# show ip nat translations
R1# show ip nat statistics
```
To verify that the NAT translation is working, it is best to clear statistics from any past translations using the ```clear ip nat statistics``` command before testing.

## Dynamic NAT
1. Define the pool of IP addresses that will be used for translations using
2. Configure a [[2.2/DNDM II/ACLs#Standard ACLs|Standard ACL]] to identify (permit) only those addresses that are to be translated.
3. Bind the ACL to the pool, using the ip nat inside source list
4. Identity which interfaces are inside
5. Identity which interfaces are outside
```cisco
ip nat pool NAT-POOL1 209.165.200.226 209.165.200.240 netmask 255.255.255.224
access-list 1 permit 192.168.0.0 0.0.255.255
ip nat inside source list 1 pool NAT-POOL1
interface serial 0/1/0
ip nat inside
interface serial 0/1/1
ip nat outside
```
To verify static nat the following commands may be useful
```cisco
R1# show ip nat translations verbose
R1# show ip nat statistics
R1# show running-config | include NAT
```
By default, translation entries time out after 24 hours, to change this type
```cisco
ip nat translation timeout <timeout-seconds>
```
To clear dynamic nat translations before they expire type
```cisco
R1# clear ip nat translation
```

## PAT
### Single Address PAT
To configure PAT to use a single IPv4 address, add the keyword ```overload``` to the ```ip nat inside source``` command.
```cisco
R2(config)# ip nat inside source list 1 interface serial 0/1/0 overload
R2(config)# access-list 1 permit 192.168.0.0. 0.0.255.255
R2(config)# interface serial 0/1/0
R2(config-if)# ip nat inside
R2(config-if)# interface serial 0/1/1
R2(config-if)# ip nat outside
```
For PAT you still need an ACL to define which private IP addresses gets translated.
Instead of associating an ACL with a pool, the ACL is associated with an interface that has a public IP address assigned.
### Dynamic PAT
An ISP may allocate more than one public IPv4 address to an organization. In this scenario the organization can configure PAT to use a pool of IPv4 public addresses for translation.
To configure PAT for a dynamic NAT address pool, simply add the keyword ```overload``` to the ```ip nat inside source``` command.
```cisco
R1(config)# ip nat pool NAT-POOL2 209.165.200.226 209.165.200.240 netmask 255.255.255.224
R1(config)# access-list 1 permit 192.168.0.0 0.0.255.255
R1(config)# ip nat inside source list 1 pool NAT-POOL2 overload
R1(config)# interface serial0/1/0
R1(config-if)# ip nat inside
R1(config)# interface serial0/1/1
R1(config-if)# ip nat outside
```
The same commands used to verify static and dynamic NAT are used to verify PAT.
The show ip nat translations command displays the translations from two different hosts to different web servers.

## Port Forwarding
```cisco
R2(config)# ip nat inside source static tcp 192.168.10.200 80 209.165.200.255 8080
R2(config)# interface serial 0/1/0
R2(config-if)# ip nat inside
R2(config)# interface serial 0/1/1
R2(config-if)# ip nat outside
```

## Debugging NAT
```cisco
debug ip nat
debug ip nat detailed
show ip nat tranlations
show ip nat statistics
show access-lists
```