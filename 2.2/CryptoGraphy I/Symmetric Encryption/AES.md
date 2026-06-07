It is also known as **Rijndael** after the creators Joan Daemen and Vincent Rijmen.
1. Substitute bytes
2. Shift rows
3. mix columns
4. Add round-key
In the last round we don't mix columns.

It is a substitution-permutation network.
Key size: 128, 192 or 256 bits i.e AES-128, AES-192 and AE2-256.
It was stated by the NSA for use in classified information.
Block size: 128 bits or 16 bytes
It used PKC#7 for padding.

AES has 3 modes of operation namely:
1. AES ECB 
2. AES CBC
3. AES CFB
4. AES OFB
5. AED CTR
6. AES GCM

### AES ECB
AES electronic codebook encrypts all the blocks individually until the entire plaintext is encrypted.
```python
from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
key = gen_random_bytes(16)
cipher = AES.new(key, AES.MODE_ECB)

plaintext = input("Enter the plaintext here> ")
ciphertext = cipher.encrypt(plaintext.encode())
```


### AES CBC
It first generates a random initialization vector which is 16 bytes long.
AES Cipher Block Chaining xors the plaintext of the next block using the ciphertext of the previous block.
```python
from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
key = get_random_bytes(16)
iv = get_random_bytes(16)
cipher = AES.new(key,AES.MODE_CBC)
```

### AEF CFB
AES Cipher Feedback Mode
### AES OFB
AES Output Feedback Block


### AES CTR
Counter modes solves the performance problem of AES CBC by encrypting a random value(a nonce) then adding one for each subsequent block and then xoring then xoring this value with the plaintext.
For decryption the ciphertext we encrypt the nonce and add the value, then we xor this value with the ciphertext.
Size of counter = plaintext block size

### AES GCM
Galois Counter Mode, 
## Advantages
1. It allows <abbr title="additional AAD, i.e say you want to send a packet but don't want to encrypt the ip header for transport reasons, it can ensure that this header header has not been tampered with during transmission.