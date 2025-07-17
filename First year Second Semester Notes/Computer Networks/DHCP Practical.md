## Making a Router to act as DHCPv4 Server

To configure a Cisco router to use DHCP type the following commands:
The command below will reserve the IPv4 addresses from 10.10.0.1 - 10.0.0.20 i.e for printers, DHCP servers, proxies etc.
```shell
R1(config)#ip dhcp excluded-address 10.0.0.1 10.0.0.20
```

To create a DHCP pool with the name pool type:
```shell
R1(config)#ip dhcp pool POOL_NAME
```

To create network type:
```shell
R1(dhcp-config)#network 10.0.0.0 /24
```
alternatively you can use the subnet/net-mask instead of the prefix length
```shell
R1(dhcp-config)#network 10.0.0.0 255.255.255.0
```

You can now configure other optional stuff like DNS-server domain-name, router etc
```shell
R1(dhcp-config)#dns-server 8.8.8.8
R1(dhcp-config)#domain-name kindaruma_lab.com
R1(dhcp-config)#default-router 10.0.0.1
```

Finally to configure the lease period type
```shell
R1(dhcp-config)#lease 0 5 30
```
The lease time is in days ours minutes
To lease infinitely type __lease infinite__ though this is not recommended.

Finally to show your configuration type
```shell
R1# show ip dhcp binding
```

## DHCP Relay Configuration
From the router enter the interface that is connected to the PC(s) you want to connect to configure DHCP relaying for i.e in this example we will use interface gigaEthernet0/1.
```shell
R1(config)# interface gigaEthernet0/1
```

Then type:
```shell
R1(config-if)#ip helper-address 10.0.0.2
```
10.0.0.2 is the IPv4 address of the DHCP server that we want to relay to.
Type the following command and if your configuration was successful you should see a line like __Helper address is x.x.x.x__
```shell
R1(config-if)#do show ip interface g0/1
```