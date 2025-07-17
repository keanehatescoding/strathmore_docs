
```bash
R1(config t)#
```
To enable [[Spanning Tree Protocol#Portfast|portfast]] in stp type the following in the switch.
```shell
spanning-tree portfast
```
To enable [[STP configuration#BPDU Guard|BPDU Guard]] in stp type the following in the switch:
```shell
spanning-tree bpduguard enable
```
To enable [[Spanning Tree Protocol#BPDU Guard| BPDU Guard]] by __default__ for STP type the following:
```shell
spanning-tree portfast bpduguard default
```