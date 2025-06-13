There are $2^{16}$ or 65,535 ports of which are categorized into 3 groups:
1. __Well-Known ports (1 to 1023)__ - usually used as destination ports of well known services i.e HTTP server on port 80
2. __Registered ports (1024 to 49151)__ - they can be uses as both source/destination. Organization usually register for specific applications.
3. __Private ports (49152 to 65535)__ - they are often used as source ports by any application.

| No.     | Transport Port | Protocol        | Description               |
| ------- | -------------- | --------------- | ------------------------- |
| 20      | TCP            | FTP - Data      | File Transfer             |
| 21      | TCP            | FTP - Control   | File Transfer             |
| 22/2222 | TCP            | SSH             | Secure Remote access,SFTP |
| 23      | TCP            | Telnet          | Remote access             |
| 25      | TCP            | SMTP            | sending mail              |
| 53      | UDP(main)/TCP  | DNS             | name resolution           |
| 67      | UDP            | DHCPv4 - Server | Configure ip addreses     |
| 68      | UDP            | DHCPv4 - Client | ip addressing             |
| 69      | UDP            | TFTP            | file transfer             |
| 80      | TCP            | HTTP            | websites                  |
| 110     | UDP            | POP3            | download mail             |
| 143     | TCP            | IMAP            | caching mail              |
| 161     | UDP            | SNMP            | fetch and store mail      |
| 389     | UDP            | LDAP            | directory lookups         |
| 443     | TCP            | HTTPS           | secure websites           |
DNS fallbacks to TCP when the host/server cannot communicate with each other or the length of the message is greater than 512 bytes
SFTP - FTP but through SSH
TFTP - Trivial FTP but the difference with FTP is TFTP is usually used in the LAN and send small configuration files and is UDP so connectionless.
DNS UDP/53 by default and TCP for fallback on port 53
When DNS servers are communicating then they use TCP.
SMB
DHCPv6 546 client
DHCPv6 547 server
SMTPS TCP 465/587
IMAPS  993
POP3S 995
FTPS 990
LDAP - UDP/TCP 88
LDAP over SSL - 636
<b>Note</b>: FTPS != SFTP