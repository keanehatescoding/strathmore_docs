It involves changing the Source IP or Destination IP or both source IP and destination IP of packets to a different IP address
## Uses of NAT
1. Static NAT is mostly used in data centers e.g. AWS cloud, to map a public IP address (that is configured to a router) to a private IP address that is configured on the cloud server
2. NAPT is used in homes, businesses, universities and  other enterprises to enable many client computers that are configured with private IP addresses to share one public IP address to access the Internet

The Linux kernel possses a packet filter framework called **netfilter**
It uses the iptables tool to write rules in the ‘nat’ table which has 3 predefinded chains: 
1. PREROUTING
2. INPUT
3. OUTPUT 
4. POSTROUTING.
![[Pasted image 20251215104945.png]]
The chains **PREROUTING** and **POSTROUTING** are the most important ones. 
PREROUTING chain is responsible for packets that just arrived at the network interface. 
After the packet has passed the PREROUTING chain the routing decision is made. 
In case that the local machine is the recipient, the packet will be directed to the corresponding process and we do not have to worry about NAT anymore. 
Just before a forwarded packet leaves the machine it passes the POSTROUTING chain and then leaves through the network interface. 
For locally generated packets they pass through the OUTPUT chain and then moves on to the POSTROUTING chain.
## SNAT
The source ip for the outgoing packet can be changed by
```shell
iptables -t nat A POSTROUTING -s <src-ip> -d <dest-ip> -j SNAT -to-source <new-src-ip> 
```
The –s and –d flags can be omitted if source IP address for all departing packets is to be re-written.

## DNAT
The destination ip for incoming packets can be changed using the following command
```shell
iptables -t nat -A PREROUTING -s <src-ip> -d <dst-ip> -j DNAT --to-destination <new-dst-ip>
```
The –s and –d flags can be omitted if destination IP address for all incoming packets is to be re-written.

## NAPT
NAPT can be enabled for this network using the following command on the router
```shell
iptables -t nat -a POSTROUTING -o eth1 -j MASQUERADE
```

## Port Forwarding
```shell
iptablee -t nat -A PREROUTING -p tcp --dport 80 -j DNAT --to-destination 10.0.0.5:80
```
## Misuses of NAT
1. IP address spoofing to launch smurf attacks
2. IP address spoofing to launch MITM attacks
- This can be used to overcome IP address based access control e.g. IP restriction in HTTP (see Apache example)