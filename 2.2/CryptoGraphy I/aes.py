from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad

# plaintext
plaintext = b"mrbean" 
print(f"This is our unecrypted message: {plaintext}")
padded_data = pad(plaintext, AES.block_size)

# key
key = b"Yon@h123"
print(f"This is our key: {key}")

# Pad the key
padded_key = pad(key, AES.block_size)
print(f"This is our padded key: {padded_key}")

# Createkey
cipher = AES.new(padded_key,AES.MODE_ECB)

# Encrypt the message
ciphertext = cipher.encrypt(padded_data)
print(f"This is our ciphertext in bytes is: {ciphertext}") 
print(f"This is our ciphertext in hex: {ciphertext.hex()}")
