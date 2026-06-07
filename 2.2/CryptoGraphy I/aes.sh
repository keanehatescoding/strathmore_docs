RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
RESET='\033[0m'
man openssl
man enc
echo -e "This is a AES algorithm .\n Buckel up because we are about learn so much more than you think .\n Can’t wait to see you again!" >test.txt
openssl rand -hex 32 >key.txt
openssl rand -hex 16 >iv.txt

echo -e "${BLUE}Encrypting and Decrypting using CFC${RESET}"
openssl enc -aes-256-cbc -in test.txt -out encrypted.enc -nosalt -iv "$(cat iv.txt)" -K "$(cat key.txt)"
xxd -b encrypted.enc
openssl enc -aes-256-cbc -in encrypted.enc -out decrypted.txt -nosalt -iv "$(cat iv.txt)" -K "$(cat key.txt)" -d
xxd -b decrypted.txt

echo -e "${GREEN}Encrypting and Decrypting using CFB${RESET}"
openssl enc -aes-256-cfb -in test.txt -out encrypted.enc -nosalt -iv "$(cat iv.txt)" -K "$(cat key.txt)"
xxd -b encrypted.enc
openssl enc -aes-256-cfb -in encrypted.enc -out decrypted.enc -nosalt -iv "$(cat iv.txt)" -K "$(cat key.txt)" -d
xxd -b encrypted.enc

echo -e "${RED}Encrypting and Decrypting using ECB ${RESET}"
openssl enc -aes-256-ecb -in test.txt -out encrypted.enc -nosalt -K "$(cat key.txt)"
xxd -b encrypted.enc
openssl enc -aes-256-ecb -in encrypted.enc -out decrypted.enc -nosalt -K "$(cat key.txt)" -d
xxd -b encrypted.enc
