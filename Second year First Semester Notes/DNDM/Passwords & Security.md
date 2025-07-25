By default when we enter a Cisco switch we enter user EXEC mode which has a prompt as shown below
```shell
R1>
```
We can enter privileged execution mode by typing enable as shown below
```shell
R1>enable
R1#
```
To secure user EXEC mode access type:
```bash
S!# configure terminal
S1(config)# line console 0
S1(config-line)# password class
S1(config-line)# login
S1(config-line)# end
S1#
```
The login command is used to enable user EXEC access.
To protect privileged access mode with an unencrypted password type:
```shell
enable
configure terminal
enable password class
```
To secure privileged access mode type with a md5-hashed password type:
```shell
S1# configure terminal
S1(config)# enable secret class
S1(config)# exit
S1#
```

Virtual terminals lines(VTY) allow remote access using telnet or SSH. Many Cisco switches support up to 16 VTY lines numbered 0 to 15.
To secure VTY lines type:
```shell
S1# configure terminal
S1(config)# line vty 0 15
S1(config-line)# password class
S1(config-line)# login
S1(config-line)# end
S1#
```

The startup-config and running-config files display most passwords in plaintext. This is a security threat because anyone can discover the passwords if they have access to these files.
To encrypt all plaintext passwords, use the service password-encryption global config command as shown in the example.
```shell
S1# configure terminal
S1(config)# service password-encryption
S1#
```

Although requiring passwords is one way to keep unauthorized personnel out of a network, it is vital to provide a method for declaring that only authorized personnel should attempt to access the device. To do this, add a banner to the device output. Banners can be an important part of the legal process in the event that someone is prosecuted for breaking into a device. Some legal systems do not allow prosecution, or even the monitoring of users, unless a notification is visible.
To set up a banner type
```shell
R1# configure terminal
R1(config)# banner motd # Authoried Access Only. Unauthorized access will be prosecuted #
R1(config# end
R1#
```
