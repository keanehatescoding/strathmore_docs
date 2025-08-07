The following assumes you have already connected the routers, switches and PCs using the correct wiring. If for some reason you are not sure which wiring to use type then consult with your lecturer and if not possible then use the automatic wiring feature in packettracer.
After you have connected and wired you will noticed the wire between the router and switch being red. This is because by default the physical port/interface at the router is off. To enable it go to the command line tab in the router and type

```shell
Router> enable
```
The command above enables you to enter privileged mode which you need to be in order to start configuring the router.

You prompt should change from '>' to '#'. Now that you are in privileged mode we need to move to global configuration mode in order to to be able to turn on the interface.

```shell
Router# configure terminal
```

Now that we are in global configuration mode we need to find the interface that we need to turn on. To do this exit the cli tab and and router and hover your mouse over the cable we want to know it's interface name. You should see something like __Gig0/0__.
Now return back to the cli tab and type the following

```shell
Router# interface GigabitEthernet 0/0
```

If you want to configure the ip address via the router type the following:

```shell
Router# ip address 192.168.0.1 255.255.255.0
```
where the command syntax is 
```shell
ip <ip-address> <subnet-mask>
```

finally type
```shell
no shutdown
```

After a few seconds ( the router is learning about the devices connected) the red marks should disappear and the wire should turn into green.
Right know the pcs should not be able to communicate with the router. This is because the pcs have no ip addresses therefore no way of sending packets to the router.
Therefore to give the PCs an ip we need to click on a pc. Go to the desktop tab and then put an appropriate ip, (the subnet mask will be automatically calculated) while the default gateway __MUST__ match whatever you had inputted in the ip address in the router.
After that you should be able to send a packet to and from the router. 
I highly recommend using the simulation mode when troubleshooting to see if the problem was the pc or the router when setting up the network.