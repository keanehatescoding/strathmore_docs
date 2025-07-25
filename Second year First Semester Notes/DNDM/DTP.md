<abbr title="Dynamic Trunking Protocol">DTP</abbr> is a Cisco proprietary protocol that is used for dynamically determining the status of interfaces (dynamic or trunk) without manual configuration.
It is enabled automatically for Cisco Switches.
On newer switches it is usually set to dynamic auto by default. while for older switches it is usually set to dynamic desirable by default.
For security reasons it should be disabled manually as hackers can attack it.
DTP has 2 options i.e
1. auto
2. desirable
A switch with DTP dynamic desirable will actively try and form a trunk with other Cisco switches while a switch with DTP auto will trunk and form a trunk with other switches only if the other router actively wants to form a trunk with it.
2 DTP dynamic auto configured switches will not form a trunk.

| S1        | S2        | Result   |
| --------- | --------- | -------- |
| auto      | auto      | no trunk |
| auto      | desirable | trunk    |
| desirable | auto      | trunk    |
| desirable | desirable | trunk    |