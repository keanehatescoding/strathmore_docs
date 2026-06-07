Routers and PCs transmit data via pin 1 and 2 while they receive data via pin 3 and 6. This means if you use a ethernet straight through cable to connect 2 PCs/Routers/Router and PC they won't be able to communicate. Therefore you have to connect two similar devices you must use a crossover cable to connect them.
Switches on the other hand send data via pin 3 and 6 while they receive data via pin 1 and 2. This means if you connect a straight through cable between a switch and a Pc/router they will are able to communicate while if it were 2 switches then they cannot communicate to each other unless you connect the two switches using a cross over cable.
![[{4E741215-7FB8-4CDE-908A-A74727B48AD7}.png]]

| Cable Type                | Standard                 | Application                          |
| ------------------------- | ------------------------ | ------------------------------------ |
| Ethernet Straight Through | Both ends T568A or T568B | Host & swich or Switch and Router    |
| Ethernet Cross over       | T5b8A and T568B          | Similar devices i.e switch to switch |
| Rollover                  | Cisco proprietory        | Workstation and console port         |
Modern Routers and switches have a option called Auto-<abbr title="media dependant interface crossover">MDIX</abbr> these allows them to send and receive data across two similar devices i.e switch & switch or router & router without needing a cross over cable.
To enable Auto-<abbr title="media dependant interface crossover">MDIX</abbr> on a Cisco switch type:
```bash
mdix auto
```

Another type of cable is a rollover cable, which is Cisco proprietary. It is used to connect a workstation to a router or switch console port.