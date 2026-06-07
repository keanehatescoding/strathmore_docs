/* bn_sample.c */
#include <openssl/bn.h>
#include <stdio.h>

#define NBITS 256

void printBN(char *msg, BIGNUM *a) {
  /* Use BN_bn2hex(a) for hex string
   * Use BN_bn2dec(a) for decimal string */
  char *number_str = BN_bn2dec(a);
  printf("%s %s\n", msg, number_str);
  OPENSSL_free(number_str);
}
int main(int argc, char *argv[]) {
  BN_CTX *ctx = BN_CTX_new();

  BIGNUM *a = BN_new();
  BIGNUM *b = BN_new();
  BIGNUM *n = BN_new();
  BIGNUM *res = BN_new();

  // Initialize a, b, n
  BN_generate_prime_ex(a, NBITS, 1, NULL, NULL, NULL);
  BN_dec2bn(&b, "273489463796838501848592769467194369268");
  BN_rand(n, NBITS, 0, 0);

  // res = a * b
  BN_mul(res, a, b, ctx);
  printBN("a * b = ", res);

  // res = a ^ b mod n
  BN_mod_exp(res, a, b, n, ctx);
  printBN("a^c mod n =", res);

  // free memory
  BIGNUM *bn_list[] = {a, b, n, res};
  size_t i, count = sizeof(bn_list) / sizeof(bn_list[0]);
  for (int i = 0; i < count; i++) {
    if (bn_list[i]) {
      BN_free(bn_list[i]);
      bn_list[i] = NULL;
    }
  }
  BN_CTX_free(ctx);
  ctx = NULL;
  return EXIT_SUCCESS;
}
