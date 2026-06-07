## Reasons for Authentication without Encryption
1. Encryption is quite slow
2. Encryption hardware costs are not-negligible
3. Encryption hardware is optimized for large data sizes.
4. An encryption algorithm may be protected by a patent.

To be useful for message authentication a hash function must have the following properties.
1. It can be applied to any arbitrary sized data.
2. It produces a fixed-length output.
3. H(x) is relatively easy to compute for a given x.
4. For any given block it is computationally infeasible to compute $y\ne x$ with $H(x)=H(y)$ - **weak collision resistant**
5. It is computationally infeasible to find any pair $(x,y)$ such that $H(x)=H(y)$ - **strong collision resistant**.
6. 