Internet Protocol Version 6 or simply ipv6 is an improvement to the ipv4 addressing scheme. It was mostly designed as a future replacement for the depletion of ipv4 addresses. It has a couple of improvements over ipv4 i.e anycast addressing.
This is a 128 bit address which usually represented using hexadecimal numbers.
It is represented as a 8 hextets separated by colons where a hextet is a 16 bit binary number represented as 4 hexadecimal numbers.
There are ~>340 unidecillion possible ipv6 addresses while there are ~>4 billion possbile ipv4 addresses.
When writing a ipv6 addresses you should follow the following rules.
1. Omit any leading zeros only __do not omit__ any trailing zeros.
2. Replace any single contiguous string of one or more hextets consisting with zeros with a double colon.
### Leading zeros vs Trailing zeros
0110- in this example the most left number is a leading zero while the right most zero is a trailing zero.
0110 can therefore be replaced with 110 but 1100 remains with 1100.

__NB__:The second rule can only take place one in order to avoid ambiguity

2001:db8:cafe:1:0:0:0:1 (leading 0s omitted) could be represented as 2001:db8:cafe:1::1. The double colon (::) is used in place of the three all-0 hextets (0:0:0). The double colon (::) can only be used once within an address, otherwise there would be more than one possible resulting address. If an address has more than one contiguous string of all-0 hextets, best practice is to use the double colon (::) on the longest string. If the strings are equal, the first string should use the double colon (::).