Iptables supports various tables i.e
1. raw - used for setting up connection tracking exemptions
2. mangle - used for packet alteration i.e TTL/QOS
3. nat
4. filter
5. security
![[Pasted image 20251215134658.png]]

Additionally each of this tables has some built in chains i.e for the filter table it is
1. INPUT
2. OUTPUT
3. FORWARD
All commands are implicitly done to the filter table if the ``-t <table-name>`` flag is not included.
However we will focus on the first four.
To display the current firewall rules type
```shell
iptables -L
```
To display the rules of a particular table i.e nat type
```shell
iptables -L -t nat
```
To delete(flush) all the rules of a table type
```shell
iptables -F -t filter
```
![[Pasted image 20251215095151.png]]
To define a new chain in a table type
```shell
iptables -N <chain-name>
```
To delete user defined chains type
```shell
iptables -X <chain-name>
```
To prevent a host from being able to ping you type
```shell
iptables -A INPUT -p icmp --icmp-type echo-request -j DROP
```
To allow ssh but block every other incoming connection type
```shell
iptables -A INPUT -p tcp --destination-port 22 -j ACCEPT
iptables -A INPUT REJECT
```
If we had used DROP instead of REJECT in the second rule, when the other laptop makes any access other than ssh to the Linux laptop, the other laptop would not receive back any error messages
How do you prevent connection-initiation (SYN) packets from being sent to your machine
```shell
iptables -t mangle -A PREROUTING -p tcp -m tcp --tcp-flags SYN NONE -j DROP
```

## IP Accounting
Also known as **network accounting**, is the process of tracking and monitoring network traffic.
It involves collecting data on the volume of data packets, types of packets, their source and destination, and other relevant information.

### Importance
1. It plays a crucial role in network management and security.
2. It allows administrators to analyze network usage patterns, detect unusual activity, and plan for network optimizations. 
3. By tracking and measuring network traffic, organizations can make informed decisions regarding resource allocation and capacity planning.
### Key Metrics
1. Packet count
2. Byte count
3. Protocol types
4. Source & Destination ip addresses

## ufw
Uncomplicated Firewall (UFW) is a front-end for managing iptables rules and providing an easier interface for configuring firewall settings in Linux.
It aims to make firewall management accessible to both novices and experienced users.

### Features & Capabilities
1. Simple syntax for rule creation and management.
2. Easy-to-understand rule structure, making it suitable for quick rule setup.
3. Integration with application profiles for commonly used services.
4. IPv4 and IPv6 support.

### Advantages of UFW
1. It provides a simple and intuitive command-line interface, making it accessible even for those unfamiliar with iptables.
2. It integrates well with other system utilities and services, allowing seamless security configuration and management in a Linux environment.
3. UFW sets a default policy of denying incoming connections, providing an additional layer of security and allows users to configure exceptions to this rule.

### Basic ufw commands
Enable and disable the ufw service
```shell
ufw enable
ufw disable
```
To check the status of ufw
```shell
ufw status
```
To set the default policy
```shell
ufw default
```
To reset the firewall rules
```shell
ufw reset
```
To see the current firewall rules added
```shell
ufw show added
```
To allow/deny a specific protocol
```shell
ufw allow 53/dns
ufw allow 80/tcp
ufw deny icmp
```
To allow/deny a specific range of addresses type
```shell
ufw allow from 192.168.1.0/24
ufw deny from 10.5.1.3
```
To allow a range of ports type
```shell
ufw allow 21-25/tcp
```
To allow traffic from a specific interface
```shell
ufw allow in on eth0
```
To delete a rule type
```shell
ufw delete 21-25/tcp
```

## Fail2Ban
It is an open-source intrusion prevention software that protects servers from brute-force attacks and other malicious activities.
### Key Concepts of Fail2Ban
**Jails** - these serve as designated security zones, segregating misbehaving IP addresses and restricting their potential harm. 
**Filters** - these formulate the rules of engagement, filters define patterns of behavior that prompt Fail2Ban to take action. 
**Actions** - When triggered by filters, Fail2Ban executes predefined responses—ranging from temporary bans to notifying administrators—tailored to uphold the integrity of the system. 

### How Fail2Ban works
**Log Monitoring**
Fail2Ban actively scans system logs (e.g., SSH, Apache, Nginx logs) to identify patterns of malicious activity.
**Rule Matching**
It employs predefined or customizable rules to match and identify unauthorized access attempts and other security violations.
**IP Ban:**
Fail2Ban dynamically updates the firewall rules to block the IP addresses that violate the defined rules, effectively preventing further access from those IPs.
The ban action can involve updating firewall rules to deny further access from that IP.
**Automatic Unban:**
Fail2Ban provides a mechanism to automatically lift the ban after a specified period, allowing legitimate users to regain access.

### Key Features of Fail2Ban
1. Log monitoring and analysis
2. Dynamic firewall rules- Fail2Ban dynamically modifies firewall rules to block IP addresses that violate defined rules.
3. Configurable jail rules.
4. Fail2Ban can send email notifications to administrators, informing them of banned IPs and other critical security events.
5. Fail2Ban supports various protocols and services, including SSH, Apache, Nginx, and more.
![[Pasted image 20251215104019.png]]