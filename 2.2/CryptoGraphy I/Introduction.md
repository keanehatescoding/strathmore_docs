Human ingenuity cannot concoct a cipher which human ingenuity cannot resolve - Edgar Alan Poe
**Computer Security** - is a generic name for a collection of tools designed to protect data and to thwart hackers.
**Network Security** - measures to protect data during transmission.
**Internet Security** - measures to protect data during its transmission over a collection of interconnected networks.
**Cryptography**  the art or science encompassing the principles and methods of transforming and intelligible message into one that is unintelligible, and then re-transforming the message back to the original form.
**Plaintext** - the original intelligible message
**Cipher text** - the transformed message
**Cipher** - an algorithm for transforming intelligible message into one that is unintelligible by transposition and/or substitution methods.
**Key** - some critical information used by the cipher, known only by the sender & recipient.
**Encipher(Encode)** - the process of converting plaintext to cipher text using a cipher and a key.
**Decipher(Decode)** - the process of converting cipher text back into plaintext using a cipher and a key.
**Cryptanalysis**  - the study of principles and methods of transforming an unintelligible message back to an intelligible message without knowledge of the key. Also known as **code breaking**.
**Cryptology**, both cryptography and cryptanalysis.
**Code** is an algorithm for transforming an intelligible message to an unintelligible one using a **code-book**.

All the encryption algorithms are based on two general principles, **substitution** in which each element in the plaintext is mapped to another element, and **transposition** in which elements in the plaintext are rearranged.
## Hierarchy of Cryptography
1. protocols - solve cryptographic problems
2. algorithms - used to construct protocols
3. primitives - used to construct primitives
4. implementation - used to implement primitives


Encryption is divided into 2 types
1. Symmetric encryption
2. Asymmetric encryption / Public Key Encryption

## Symmetric Encryption
Symmetric encryption is a type of encryption that uses one key for encryption and decryption.
It is also known as **shared/secret key encryption** or **conventional encryption**.
They are further divided into 2 types of ciphers namely:
1. Block Ciphers
2. Stream Ciphers
### Block ciphers
A **block cipher** process the input and block of elements at a time, producing output block for each input block.
1. <abbr title="Data Encryption Standard">DES</abbr>
2. Triple <abbr title="Data Encryption Standard">DES</abbr>
3. <abbr title="Advanced Encryption Standard">AES</abbr>
### Steam Ciphers
Encryption of a given input depends on its position in the stream, therefore they process the input elements continuously, producing output element one at a time, as it goes along using a pseudo-random-bit-stream.
They are further subdivided into 2
1. FSR based i.e Grain, Trivium and Espresso
2. Others i.e RC4

#### Advantages
1. It is faster to compute than a block cipher

### FSR-based
1. Grain
2. Trivium
3. Espresso

### Others
1. RC4 - used in ssl and for wep 
2. RC5

**Confusion** and **diffusion** are concepts that were made by **Claude Shannon**.
## Confusion
Each bit in the ciphertext depends on several parts of the key, obscuring the connections between the two.
Or a complex relationship between the key and the ciphertext.

## Diffusion
Ideally, A change in a single bit of the plaintext produces a change in half of the bits of the ciphertext.

**One-time pad**, key is a random bit sequence as long as the plaintext. XOR the key and plaintext and send. The recipient decrypts the stream via xoring the cipher text with the key.
Advantages: 
- xor is computationally cheap
- encryption and decryption are the same operation.
- is as secure a possible
- no statistical relationship to plaintext provided the key is a truly random sequence.
Disadvantages:
- Impractical in most realistic scenarios
- No guarantee of data integrity
- Insecure if keys are reused
- 
## Characteristics of a Good Cipher
### 1. Avalanche Effect
A small change in the input(plaintext) should lead to significant change in the output.(ciphertext)
Flipping a bit in the input should flip(about) half of the bits in the output.