The following six steps are required to setup SSH on Cisco switches/routers.
1. Configure a unique device hostname.
2. Configure the IP domain name
To setup the IP domain name of the network type:
```shell
ip domain name <name>
```
3. Generate a key to encrypt ssh traffic
```shell
crypto-key generate rsa general-keys modulus
```
4. Verify or create a local database entry
```shell
username <username> secret <password>
```
5. Authenticate against the local database
This uses the local database entry to authenticate against the vty line.
```shell
login local
```
5. Enable vty inbound ssh connections
By default, no input session is allowed on vty lines. You can specify multiple input protocols including Telnet and SSH using
```shell
trasnport input ssh
```
2