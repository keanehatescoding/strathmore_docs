To display the current etherchannel configuration type:
```
show etherchannel load-balance
```
A command that shows a summary of the etherchannel is:
```
show etherchannel summary
```
If you want to see the etherchannel modes of each interface use the following command:
```shell
show ether-channel port-channel
```
To change the criteria for load balancing type
```
port-channel load-balance src-dst-mac
```

To configure an interface as an etherchannel
```shell
interface range g0/0 -8
channel-group 1 mode desirable
```

 