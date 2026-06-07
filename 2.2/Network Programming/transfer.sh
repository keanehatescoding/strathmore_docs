#!/bin/bash
SRC_DIR="/home/netadmin/MyFiles"
servers=("192.168.122.84" "192.168.122.122" "192.168.122.208")
for comp in "${servers[@]}"; do
	echo -e "Pinging $comp \n"
	ping -c 4 "$comp"
	echo -e "\n\nSending files to $comp\n"
	rsync -avz $SRC_DIR netadmin@"$comp":
done
