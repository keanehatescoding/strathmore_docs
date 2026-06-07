## Electronic Codebook (ECB) Mode
It splits plaintext into blocks and then encrypts each block separately using the block cipher.
![[Pasted image 20251202200933.png]]

Drawbacks: 
- Identical blocks produce identical blocks of ciphertext.
- No integrity checks: can mix and match blocks
- Information leakage

![[Pasted image 20251202201108.png]]
## Cipher Block Chaining (CBC) Mode
It splits plaintext into blocks, XOR each block with the result of the previous block and encrypt.
Since each block depends on the previous block then identical blocks are encrypted differently.
![[Pasted image 20251202201508.png]]

![[Pasted image 20251202201443.png]]
![[Pasted image 20251202202538.png]]
Drawbacks:
- Since each block first needs to be xored with the previous block then the encryption process cannot be parallelized hence slow.
- The last ciphertext depends on the entire plaintext


## Counter (CTR) Mode 
It splits plaintext into blocks, XOR each block with the result of encrypting a counter value.
![[Pasted image 20251202202716.png]]
![[Pasted image 20251202202733.png]]

Advantages:
- No chaining, which allows for parallel implementation
