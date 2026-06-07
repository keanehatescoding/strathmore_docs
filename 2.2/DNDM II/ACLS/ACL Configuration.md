```cisco
access-list <acl-number> { deny | permit | remark text } source [source-wildcard] [log]
```
The remark text is an optional text-entry for documentation purposes
The source wildcard field is an optional field that is a 32-bit wildcard mask that is applied to the source.
The log field is an optional field that generates and sends an informational message when the ACE is matched
Use the ```no access-list <acl-number>``` to remove a numbered standard ACL.
To create a named standard ACL, use the following command
```cisco
ip access-list standard NO-ACCESS
```
After a standard IPv4 ACL is configured, it must be linked to an interface or feature.
The ``ip access-group command`` is used to bind a numbered or named standard IPv4 ACL to an interface.
```cisco
ip access-group {acl-number | acl-list-name} {in|out}
```

Examples
```cisco
access-list 10 remark ACE permits ONLY host 192.168.10.10 to the internet
access-list 10 permit host 192.168.10.10 
do show access-lists
access-list 10 remark ACE permits all hosts in LAN 2
access-list 10 permit 192.168.20.0 0.0.0.255 
int serial0/1/0
ip access-group 10 out
```

Using Named Standard ACL Example
```cisco
R1(config-if)# ip access-list standard PERMIT-ACCESS
R1(config-std-nacl)# remark ACE permits host 192.168.10.10
R1(config-std-nacl)# permit host 192.168.10.10
R1(config-std-nacl)# remark ACE permits hosts in LAN 2
R1(config-std-nacl)# permit 192.168.20.0 0.0.0.255
R1(config-std-nacl)# exit
R1(config)# ip access-group PERMIT-ACCESS out
R1(config)# end
R1# show access-list
R1# show run | include access list
R1# show ip int Serial0/1/0 | include access list
```


To modify an numbered ACE changing a rule via sequence number is as follows:
```cisco
R1(config)# do show access-lists
R1(config)# ip access-list standard 1
R1(config-std-nacl)# no 10 
R1(config-std-nacl)# 10 deny host 192.168.10.10
```
change 10 to the appropriate sequence number.

For a named ACE it is follows
```cisco
R1(config)# do show access-lists
R1(config)# ip access-list standard PERMIT-HOST
R1(config-std-nacl)# no 15
R1(config-std-nacl)# 10 deny host 192.168.10.10
```

To view stats i.e how many times an entry has been matched used the following command.
```cisco
show access-list
```
Note that the implied deny any statement does not display any statistics. To track how many implicit denied packets have been matched, you must manually configure the deny any command.
To clear the access-list counters type
```cisco
clear access-list counters
```

To configure a extended numbered ace type
```cisco
access-list 10 permit tcp any 192.168.10.0 0.0.0.255 established
int serial0/1/0
ip access-group 10 out
```

To configure a named ace type
```cisco
ip access-list extended NO-FTP-ACCESS
R1(config-ext-nacl)# deny tcp any 192.168.10.0 0.0.0.255 any eq 21
R1(config-ext-nacl)# deny tcp any 192.168.10.0 0.0.0.255 any eq 22
```