## Staff network
Host needed: 100
$2^n$ -2 >=100 -> $2^n$ >= 98
but we know $2^7$ = 128 which is greater than 98 so the last seven bits of the right most octet change to zero i.e 32 - 7 = 25 meaning our subnet mask is 11111111.11111111.11111111.10000000
which is /25 in Cidr notation.
This makes our ip range be 192.168.0.0 to 192.168.0.127 for the staff network with 192.168.0.0 being our network address, 192.168.0.1 being our ip address of our default gateway and 192.168.0.127 being our broadcast address.
The first computer host of the staff network will have the ipv4 address 192.168.0.2 and the other hosts will run through to our last host whose ipv4 address will be 192.168.0.126 if more employees are added to this subnet.

## Sales network
Host needed: 50
$2^n$ -2 >=50 -> $2^n$ >= 48
but we know $2^6$ = 64 which is greater than 50 so the last six bits of the right most octet change to zero i.e 32 - 6 = 26 meaning our subnet mask is 11111111.11111111.11111111.11000000
which is /27 in Cidr notation.
This makes our ip range be 192.168.0.128 to 192.168.0.191 for the staff network with 192.168.0.128 being our network address, 192.168.0.129 being our ip address of our default gateway and 192.168.0.191 being our broadcast address.
The first computer host of the staff network will have the ipv4 address 192.168.0.130 and the other hosts will run through to our last host whose ipv4 address will be 192.168.0.190 if more employees are added to this subnet.

## IT network
Host needed: 25
$2^n$ -2 >=25 -> $2^n$ >= 23
but we know $2^5$ = 32 which is greater than 25 so the last five bits of the right most octet change to zero i.e 32 - 5 = 27 meaning our subnet mask is 11111111.11111111.11111111.11100000
which is /27 in Cidr notation.
This makes our ip range be 192.168.0.192 to 192.168.0.223 for the staff network with 192.168.0.192 being our network address, 192.168.0.193 being our ip address of our default gateway and 192.168.0.223 being our broadcast address.
The first computer host of the staff network will have the ipv4 address 192.168.0.194 and the other hosts will run through to our last host whose ipv4 address will be 192.168.0.222 if more employees are added to this subnet.

## Guest network
This is the reserved subnet whose subnetting will be as follows.
Host needed: 25
$2^n$ -2 >=25 -> $2^n$ >= 23
but we know $2^5$ = 32 which is greater than 25 so the last five bits of the right most octet change to zero i.e 32 - 5 = 27 meaning our subnet mask is 11111111.11111111.11111111.11100000
which is /27 in Cidr notation.
This makes our ip range be 192.168.0.224 to 192.168.0.255 for the staff network with 192.168.0.224 being our network address, 192.168.0.225 being our ip address of our default gateway and 192.168.0.255 being our broadcast address.
The first computer host of the staff network will have the ipv4 address 192.168.0.226 and the other hosts will run through to our last host whose ipv4 address will be 192.168.0.254 if more guests are added to this subnet.


| **Subnet** | **IP Range**                  | **Network Address** | **Default Gateway** | **Broadcast Address** | **CIDR Notation** |
| ---------- | ----------------------------- | ------------------- | ------------------- | --------------------- | ----------------- |
| Staff      | 192.168.0.0 - 192.168.0.127   | 192.168.0.0         | 192.168.0.1         | 192.168.0.127         | /25               |
| Sales      | 192.168.0.128 - 192.168.0.191 | 192.168.0.128       | 192.168.0.129       | 192.168.0.191         | /26               |
| IT         | 192.168.0.192 - 192.168.0.223 | 192.168.0.192       | 192.168.0.193       | 192.168.0.223         | /27               |
| Guests     | 192.168.0.224 - 192.168.0.255 | 192.168.0.224       | 192.168.0.225       | 192.168.0.255         | /27               |
