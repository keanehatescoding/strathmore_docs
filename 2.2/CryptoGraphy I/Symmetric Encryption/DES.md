DES aka Data Encryption Algorithm a feistel network cipher.
It was invented by IBM, issued in the U.S as federal standard in 1977.
It uses a 64 bit key which is converted to a 56 bit subkey to encrypt a 64 bit block.
This 56 bit sub key is used further to generate a 16 rounds of 48 bit round keys which are used to encrypt/decrypt the plaintext.
It is insecure and therefore __3DES__ or __triple DES__ was created 
## Encryption Steps
For each block.
1. Initial permutation, the bits are exchanged according to the following bit ordering.
![[Pasted image 20251125140612.png]]
2. Divide the plaintext to two 32 bit blocks.
3. The right block becomes the new left block for the next round i.e $L_{i}= R_{i-1}$
4. The right block is passed through a mangler function with the $n^{th}$ round of the key and the result is xored with the the left block and the final result is the new right block.
$R_i = L_{i-1}\oplus M(R_{i-1},K_i)$
where $M()$ is the **mangler function**.
![[Pasted image 20251125141300.png]]
5. Repeat step 1-3 for another 15 rounds.
6. Whatever we get after the the 16$^{th}$ round we exchange the left and right blocks and this is the final ciphertext.
7. Inverse Initial permutation. The bits are reorder according to the following bit ordering.
![[Pasted image 20251125140955.png]]


A image showing a high level of the entire algorithm is the one below:
![[Pasted image 20251125141130.png]]
## Decryption Steps
1. Divide the ciphertext to two 32 bit blocks.
2. The right block will become the left block for the next round.
3. The right block is passed through a mangler function with the round key and this output is xored with the left block to get the right block of the next round.
4. These  3 steps is repeated for another 15 rounds.
5. Swap the left and right block from the last round and this is the original plaintext.

The **mangler** function also known as the **feistel function** or **round function** is responsible for __confusion__ and __diffusion.__
Key size - the larger the key, the more the __confusion__ and **diffusion** hence the secure, while the shorter the key the easier it is to brute force. However the longer the key, the slower it is to encrypt and decrypt the message.
The number of rounds, makes it harder to brute force the message, fewer rounds makes it easier to brute force the message. However more rounds makes the encryption and decryption process slower, i.e 3DES is approximately 3 times slower than DES because it uses 48 rounds while DES uses 16 rounds.
A larger block provides greater security. 
A more complex mangler function gives greater security.
A more complex subkey generation algorithm provides greater security.
![[Pasted image 20251202194038.png]]

Their is a trade-off between security and speed.
DES is reversible so decryption is by running DES backwards.
![[Pasted image 20251202194538.png]]
Three DES blocks cascade.
Three or two (K1=k3) keys, 168 or 112 bits.
Backward compatability with DES.
<abbr title="Data Encryption Standard">DES</abbr>-X uses key-whitening to increase the security of the iterated block cipher. Since, it uses key-whitening it is not susceptible to meet-in-the-middle attack.