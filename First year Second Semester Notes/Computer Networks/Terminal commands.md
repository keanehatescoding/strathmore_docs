## 1.ping
Test the connectivity of two nodes or the TCP/IP stack of your network hosts i.e. If your on windows don't include the "-c 4".
To check if you can send packets to your default gateway usually type this
```sh
ping 192.168.0.1 -c 4
```

To check if dns is properly configured in your computer type:
```sh
ping archwiki.org -c 4
```

To check if you can send a message to another computer in your LAN type
```sh
# ping your broadcast address to get hosts in your network that are online then ping any of your hosts.
ping <ip of the target computer>  -c 4
```

To send a broadcast ping you can use either of the two broadcast addresses.
```sh
ping 255.255.255.255 # for limited broadcast ping
```

Using your netmask get your directed broadcast address then ping it i.e.
```sh
ping 192.168.0.255
```
for the classic class C private ip address


## 2.ifconfig
This command gets your displays your network configuration, the  windows equivalent command for this is ipconfig
```sh
ifconfig
```

To get a more detailed configuration type
```sh
ifconfig -a
```

## 3. dig
This command is used to resolve an hostname to an ip address. The windows equivalent command is nslookup
```sh
dig archwiki.org 
```

## 4. nestat
Used to show tcp connectionas and their ip addresses.
