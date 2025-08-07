To check the current switchport mode of a interface type:
```shell
show int g0/0 switchport
```
To configure a switch as switchport mode DTP auto type:
```shell
switchport mode dynamic auto
```
To configure a switch as switchport mode DTP desirable type:
```shell
switchport mode dynamic desirable
```
To disable DTP on interface type:
```shell
switchport nonegotiate
```
Alternatively you could also use
```shell
switchport mode access
```