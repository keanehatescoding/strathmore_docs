#!/usr/bin/env bash
GREEN='\033[0;32m'
RESET='\033[0m'
RED=$'\e[1;31m'
BLUE='\033[1;34m'

echo -e "This is Cryptography 101 .\n Learning basic encryption with DES algorithm .\n Join us if you can. Thank you. " >cryptography.txt
cat cryptography.txt
echo

head -c 8 /dev/urandom >key.bin
KEY_HEX=$(xxd -p -c 256 key.bin)
echo -e "${BLUE}Key (hex): $KEY_HEX"
echo

echo -e " ${GREEN} Encrypting with DES-CBC ${RESET} "
openssl enc -des-cbc -in cryptography.txt -out encrypted.enc --nosalt -iv 0000000000000000 -K "$KEY_HEX" -provider legacy -provider default
xxd -b encrypted.enc
echo

echo -e " ${GREEN} Encrypting with DES-CBC + base64 ${RESET} "
openssl enc -des-cbc -in cryptography.txt -out encrypted.enc --nosalt -iv 0000000000000000 -K "$KEY_HEX" -a -provider legacy -provider default
cat encrypted.enc
echo

echo -e "${RED}Decrypting des-cbc ciphertext${RESET}"
openssl enc -des-cbc -d -in encrypted.enc -out decrypted.txt --nosalt -iv -K 0000000000000000 "$KEY_HEX" -a -provider legacy -provider default
ls
cat decrypted.txt
echo

echo -e "${GREEN}Encrypting with des-cfb${RESET}"
openssl enc -des-cfb -in cryptography.txt -out encrypted.enc --nosalt -iv 0000000000000000 -K "$KEY_HEX" -provider legacy -provider default
cat encrypted.enc
echo
echo

echo -e "${RED}Decrypting des-cfb ciphertext${RESET}"
openssl enc -des-cfb -d -in encrypted.enc -out decrypted.txt --nosalt -iv 0000000000000000 -K "$KEY_HEX" -provider legacy -provider default
cat decrypted.txt
echo

echo -e "${GREEN}Encrypting with des-ofb${RESET}"
openssl enc -des-ofb -in cryptography.txt -out encrypted.enc --nosalt -iv 0000000000000000 -K "$KEY_HEX" -provider legacy -provider default
cat encrypted.enc
echo
echo

echo -e "${RED}Decrypting des-ofb ciphertext${RESET}"
openssl enc -des-ofb -d -in encrypted.enc -out decrypted.txt --nosalt -iv 0000000000000000 -K "$KEY_HEX" -provider legacy -provider default
cat decrypted.txt
