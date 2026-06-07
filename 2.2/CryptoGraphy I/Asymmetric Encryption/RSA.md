## Precursor
### Fermat's Little Theorem
It states that $a^{p}-a$ is a multiple of $a$ provided
$p\in\mathbb{P}$ . Therefore, $a^{p}\cong a(\mod p) ,p\in\mathbb{P}$ 
### From Fermat's Little Theorem
From Fermat's little theorem we can infer,$a^{p-1}\cong 1(\mod p),\forall p\in\mathbb{P},a \mod p \ne 1$
### Euler's theorem
$a^{(p-1)(q-1)}\cong1(\mod pq)$ provided $p,q\in \mathbb{P}$
$a^{(p-1)(q-1)+1}\cong a(\mod pq)$ provided $p,q\in \mathbb{P}$
$a^{r}\cong a(\mod pq)$ where
$r\cong 1(\mod ((p-1)(q-1))$

## <abbr title="Rivest Shamir Adleman">RSA</abbr>
It relies on the hard ability to factor prime factors fast for classical computers.
$(m^{e})^{d}\cong m(\mod n)$
where $n=p*q$, $p,q\in \mathbb{P}$, $ed \cong 1(\mod (p-1)(q-1))$, $gcd(e,\phi(n)=1$ and $e<\phi(n)$
$(e,n)$ is the public key
$(d,n)$ is the private key
$m$ is the message
$c=m^e(\mod n)$ where $c$ is the ciphertext
$m = c^{d}(\mod n)$ 

## <abbr title="Rivest Shamir Adleman">RSA</abbr> Key Generation
1. Choose two prime number $p$ and $q$
2. Compute $n=p\times q$
3. Compute $\phi(n)=(p-1)(q-1)$
4. Choose $e$ such that $\gcd(e,\phi(n))=1$ , they are coprime and $e<\phi(n)$
The most common value of $e=65537$
5. Compute $d\cong e^{-1}(\mod \phi(n))$ 
Efficiently found using the extended Euclidean algorithm.

## RSA Signing
$m \cong (m^{e})^{d}\cong (\mod n)=m \cong m^{ed}(\mod (n))=(m^{d})^{e}(\mod n)$
An interesting property emerges from the above property.
$s=m^{d}(\mod n)$ where  $s$ is the signature