Hashing is the process of using a mathematical operation to convert any arbitrary data into a fixed size output using a special function known as a hashing function.
Hashing is a one-way function.
## Properties
1. It is a one way function
2. A change in one bit changes all other bits
## Hashing Resistance Properties
### 1. It is deterministic
The same input will always result in the same exact output.
$$\forall m1,m2 \in M: m1 = m2 \implies H(m1)=H(m2)$$
### 1. It is Pre-Image Resistance
Given a hash value $h$, it should be computationally infeasible to find an input message $m$ such that $h=H(m)$
### 2.Second Pre-Image Resistance
Given an input message $m1$ it should be difficult a different input message $m2$ such that $\text{hash}(m1)=\text{hash}(h2)$
### 3. Collision Resistance
It should be difficult to find two different input $m1$ and $m2$ such that $H(m1)=H(m2)$
MD5 no longer satisfies this property.
### 4. Avalanche Effect
For any input $x$, and a single bit modified in input $x$, every bit of the hash should change with the probability 0.5.
This can be expressed in probabilistic terms using <abbr title="Strict Avalanche Criteria">SAC</abbr>.
$Pr(H(x_{i})\ne H(x)\approx 0.5 \forall i \in [1,i]$

## Types of Hashing Algorithm
1. MD5
2. SHA256
3. SHA512
4. Bcrypt
5. 
## Applications
1. Password Hashing
2. Proof of Work(crypto-currencies)
3. 
## SHA
It was developed by NIST and published as a Federal Information Processing standards (FIPS 180) in 1993.
It was revised in 1995 as SHA-1 and published as FIPS 180-1.
It is based on MD4 and closely resembles it.
It produces a 160 bit hash values.
In 2005, NIST planned to phase out SHA-1 and move to a reliance on SHA-2 by 2010.
SHA-3 was standardized by NIST in 2015.
It is based on the cryptographic primitive family **Keccak**.
It won the NIST hash competition of 2012.
It works completely different construct from SHA-2 i.e a **sponge**, data is first "absorbed" into the sponge and then the sponge is "squeezed" out.
SHA-3 is more secure than sha-256 because it is not susceptible to length extension attacks.
![[Pasted image 20251203014601.png]]

![[Pasted image 20251203014936.png]]

![[Pasted image 20251203015243.png]]
In SHA-512 every bit of the hash code is a function of every bit of the input, thus result is well mixed due to a complex function of F.
- $2^{256}$ operations to find 2 similar hashes.
- $2^{512}$ operations to find a message with a given digest.
## HMAC 
Hashed Messaged Authentication code
It is immune to length extension attacks.
First we use our key to derive to sub-keys $k1$ and $k2$ and then we calculate the hash of $h(k|m)$ and append that to $k2$ and hash it again.
The keys are derived by taking 2 constants and xoring them with the key separately.
The inner pad is usually 0x36 and the outer pad is usually 0x53. They were chosen because they have a have a large hamming distance between the two i.e they have many bits in common and are not the same number which is crucial.

![[Pasted image 20251115140746.png]]
![[Pasted image 20251115140833.png]]
![[Pasted image 20251115140853.png]]
![[Pasted image 20251115140722.png]]![[Pasted image 20251115140953.png]]
![[Pasted image 20251115141043.png]]