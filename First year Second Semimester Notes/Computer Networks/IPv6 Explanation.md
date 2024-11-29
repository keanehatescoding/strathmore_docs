This is a 128 bit address that was created mainly due to the depletion of IPv4 addresses.
It is represented as a 8 hextets separated by colons where a hextet is a 16 bit binary number represented as 4 hexadecimal numbers.
There are 340 unidecillion possible ipv6 addresses while there are 4 billion possbile ipv4 addresses.
When writing a ipv6 addresses you should follow the following rules.
1. Omit any leading zeros and do not omit any trailing zeros.
2. Replace any single contiguous string of one or more hextets consisting with zeros with a double colon.
### Leading zeros vs Trailing zeros
0110- in this example the most left number is a leading zero while the right most zero is a trailing zero.
0110 can therefore be replaced with 110 but 1100 remains with 1100.

__NB__:The second rule can only take place one in order to avoid ambiguity

2001:db8:cafe:1:0:0:0:1 (leading 0s omitted) could be represented as 2001:db8:cafe:1::1. The double colon (::) is used in place of the three all-0 hextets (0:0:0). The double colon (::) can only be used once within an address, otherwise there would be more than one possible resulting address. If an address has more than one contiguous string of all-0 hextets, best practice is to use the double colon (::) on the longest string. If the strings are equal, the first string should use the double colon (::).