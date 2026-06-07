Published in 1976.
It relies of modulo arithmetic like RSA.
Instead of exchanging keys we exchange public variables.
First Alice and Bob have to agree on a value generator value, $g$ which is usually a very small prime number which is a primitive root modulo of $n$ a large prime i.e 2000 or 4000 bits long. If $n$ is small then we can brute force to get the value of $b$ or $a$.
Alice and Bob each choose their own private values $a$ and $b$ which are never shared and lie within the domain $1<a<n$.
Alice and Bob then combine their private values with the $g$ and $n$ i.e for Alice $s_A=g^{a}\mod n$ and for Bob $s_B=g^{b}\mod n$.
They then share their mixtures respective public keys $g^{a}\mod n$ for Alice and $g^ {b}\mod n$ and Bob.
Alice can therefore calculate $(g^{b})^{a}\mod n$ while Bob can also calculate $(g^{a})^{b}\mod n$ and by the rules of exponents this are both the same and therefore they can use this to encrypt their messages.
Malory has $g$, $n$ and $g^{a}\mod n$, $g^{b}\mod n$, $g^a$ and $g^{b}$ but he can try and get $g^{a+b}$ but they can never get $g^{ab}\mod n$ ,therefore he can never decrypt the message.
Being able to solve $a$ or $b$ from $g^{a}\mod n$ or $g^{b}\mod n$ is computationally infeasible even for a super computer and is known as the discrete log problem.
$(g^{a}\mod n)^{b}\mod n = (g^{b}\mod n)^{a}\mod n = g^{ab}\mod n = g^{ba} \mod n$
This is all possible due to the commutative property.