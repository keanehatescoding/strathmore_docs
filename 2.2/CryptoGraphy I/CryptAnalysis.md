Is done via analysis of the cipher text i.e via
1. Frequency analysis, Correlation analysis
2. Requires some knowledge of the plaintext

| Attack           | Algorithm | Ciphertext | Plaintext                                            |
| ---------------- | --------- | ---------- | ---------------------------------------------------- |
| Ciphertext       | Known     | Known      | Known                                                |
| Known plaintext  | Known     | Known      | One or more plaintext-ciphertext pairs known         |
| Chosen plaintext | Known     | Known      | Cipher text known from plaintext chosen by attackers |

Bruteforce attack
1. Try all possible keys
2. With n-keys, attacker needs to make $2^{n}- 1$ attempts on average.

The attacker knows the attack is successful via:
1. Recognising result as plaintext
2. Assuming some knowledge about the plaintext

