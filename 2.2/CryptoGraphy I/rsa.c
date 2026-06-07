#include <openssl/bn.h>
#include <stdio.h>
#include <stdlib.h>
#define NBITS 256
void printBN(char *msg, BIGNUM *a);
BIGNUM *task_1(BIGNUM *p, BIGNUM *q, BIGNUM *e, BN_CTX *ctx1);
int main(int argc, char *argv[]) {
  // task 1
  BN_CTX *ctx1 = BN_CTX_new();
  BIGNUM *p = BN_new();
  BN_hex2bn(&p, "F7E75FDC469067FFDC4E847C51F452DF");
  BIGNUM *q = BN_new();
  BN_hex2bn(&q, "E85CED54AF57E53E092113E62F436F4F");
  // e1 = 886979 == 0x0D88C3
  BIGNUM *e1 = BN_new();
  BN_hex2bn(&e1, "0D88C3");
  BIGNUM *private_key;
  // phi_n = (p - 1) * ( q- 1)
  // private_key(d) = inv(e,phi_n)
  private_key = task_1(p, q, e1, ctx1);
  printBN("Private key (d) is: ", private_key);

  // task 2
  BN_CTX *ctx2 = BN_CTX_new();
  BIGNUM *n1 = BN_new();
  BN_hex2bn(&n1,
            "DCBFFE3E51F62E09CE7032E2677A78946A849DC4CDDE3A4D0CB81629242FB1A5");
  // e2 = 65537 == 0x010001
  BIGNUM *e2 = BN_new();
  BN_hex2bn(&e2, "010001");
  BIGNUM *M1 = BN_new();
  //  M1 = $python23 -c ’print("A top secret!".encode("utf-8").hex())’
  BN_hex2bn(&M1, "4120746f702073656372657421");
  BIGNUM *c1 = BN_new();
  // c = M ^ e mod n
  BN_mod_exp(c1, M1, e2, n1, ctx2);
  printf("\nEncrypting 'A top secret!' via rsa ...\n");
  printBN("Resulting hex string: ", c1);
  printf("\n");

  // task 3
  BIGNUM *d = BN_new();
  BN_hex2bn(&d,
            "74D806F9F3A62BAE331FFE3F0A68AFE35B3D2E4794148AACBC26AA381CD7D30D");
  BIGNUM *c2 = BN_new();
  BN_hex2bn(&c2,
            "8C0F971DF2F3672B28811407E2DABBE1DA0FEBBBDFC7DCB67396567EA1E2493F");
  // plaintext1 = c2 ^ d mod n
  BIGNUM *plaintext1 = BN_new();
  BN_mod_exp(plaintext1, c2, d, n1, ctx2);
  printf(
      "Decrypting "
      "'8C0F971DF2F3672B28811407E2DABBE1DA0FEBBBDFC7DCB67396567EA1E2493F'\n");
  printBN("Result: ", plaintext1);
  printf("\n");

  // task 4
  // M2 = python2 -c 'print("I owe you $2000.".encode("hex"))'
  BIGNUM *M2 = BN_new();
  BN_hex2bn(&M2, "49206f776520796f752024323030302e");
  // M3 = python2 -c 'print("I owe you $3000.".encode("hex"))'
  BIGNUM *M3 = BN_new();
  BN_hex2bn(&M3, "49206f776520796f752024333030302e");
  BIGNUM *c3 = BN_new();
  // c3 = M2 ^ e2 mod n
  BN_mod_exp(c3, M2, e2, n1, ctx2);
  printBN("'I owe you $2000.' encrypted is :", c3);
  // c4 = M3 ^ e2 mod n
  BIGNUM *c4 = BN_new();
  BN_mod_exp(c4, M3, e2, n1, ctx2);
  printBN("'I owe you $3000.' encrypted is :", c4);

  // Task 5
  BN_CTX *ctx3 = BN_CTX_new();
  BIGNUM *M4 = BN_new();
  // M4 = python2 -c 'print("Launch a missile.".encode("hex")'
  BN_hex2bn(&M4, "4c61756e63682061206d697373696c652e");
  BIGNUM *S1 = BN_new();
  // S = 643D6F34902D9C7EC90CB0B2BCA36C47FA37165C0005CAB026C0542CBDB6802F
  BN_hex2bn(&S1,
            "643D6F34902D9C7EC90CB0B2BCA36C47FA37165C0005CAB026C0542CBDB6802F");
  BIGNUM *M5 = BN_new();
  // n2 = 'AE1CD4DC432798D933779FBD46C6E1247F0CF1233595113AA51B450F18116115'
  BIGNUM *n2 = BN_new();
  BN_hex2bn(&n2,
            "AE1CD4DC432798D933779FBD46C6E1247F0CF1233595113AA51B450F18116115");
  // 'M5' = S1^e2 mod n2
  BN_mod_exp(M5, S1, e2, n2, ctx3);
  if (BN_cmp(M5, M4)) {
    printf("\nThe message was forged\n");
    printBN("The message received from allegedly \"Alice\" was           : ",
            M4);
    printBN("Message recovered from decrypting using Alice's public key  : ",
            M5);
  } else {
    printf("\nThe message received is correct\n");
    printBN("The message recovered from \"Alice's\" public key was: ", M4);
    printBN("Message recovered from decrypting using  Alice's public key  :",
            M5);
    printf("\n");
  }
  BIGNUM *S2 = BN_new();
  // S = 643D6F34902D9C7EC90CB0B2BCA36C47FA37165C0005CAB026C0542CBDB6803F
  BN_hex2bn(&S2,
            "643D6F34902D9C7EC90CB0B2BCA36C47FA37165C0005CAB026C0542CBDB6803F");
  BIGNUM *M6 = BN_new();
  // 'M6' = S2^e2 mod n2
  BN_mod_exp(M6, S2, e2, n2, ctx3);
  if (BN_cmp(M6, M4)) {
    printf("\nThe message was forged\n");
    printBN("The message received from allegedly \"Alice\" was           : ",
            M4);
    printBN("Message recovered from decrypting using Alice's public key  : ",
            M6);
    printf("\n");
  } else {
    printf("\nThe message received is correct\n");
    printBN("The message recovered from \"Alice's\" public key was: ", M4);
    printBN("Message recovered from decrypting using  Alice's public key  :",
            M6);
    printf("\n");
  }

  // task 6
  BN_CTX *ctx4 = BN_CTX_new();
  // modulus for our root cert i.e Internet Security Research Group
  BIGNUM *ISRG_Root_X1_modulus = BN_new();
  BN_hex2bn(
      &ISRG_Root_X1_modulus,
      "ADE82473F41437F39B9E2B57281C87BEDCB7DF38908C6E3CE657A078F775C2A2FEF56A6E"
      "F6004F28DBDE68866C4493B6B163FD14126BBF1FD2EA319B217ED1333CBA48F5DD79DFB3"
      "B8FF12F1219A4BC18A8671694A66666C8F7E3C70BFAD292206F3E4C0E680AEE24B8FB799"
      "7E94039FD347977C99482353E838AE4F0A6F832ED149578C8074B6DA2FD0388D7B037021"
      "1B75F2303CFA8FAEDDDA63ABEB164FC28E114B7ECF0BE8FFB5772EF4B27B4AE04C12250C"
      "708D0329A0E15324EC13D9EE19BF10B34A8C3F89A36151DEAC870794F46371EC2EE26F5B"
      "9881E1895C34796C76EF3B906279E6DBA49A2F26C5D010E10EDED9108E16FBB7F7A8F7C7"
      "E50207988F360895E7E237960D36759EFB0E72B11D9BBC03F94905D881DD05B42AD641E9"
      "AC0176950A0FD8DFD5BD121F352F28176CD298C1A80964776E4737BACEAC595E689D7F72"
      "D689C50641293E593EDD26F524C911A75AA34C401F46A199B5A73A516E863B9E7D72A712"
      "057859ED3E5178150B038F8DD02F05B23E7B4A1C4B730512FCC6EAE050137C439374B3CA"
      "74E78E1F0108D030D45B7136B407BAC130305C48B7823B98A67D608AA2A32982CCBABD83"
      "041BA2830341A1D605F11BC2B6F0A87C863B46A8482A88DC769A76BF1F6AA53D198FEB38"
      "F364DEC82B0D0A28FFF7DBE21542D422D0275DE179FE18E77088AD4EE6D98B3AC6DD2751"
      "6EFFBC64F533434F");
  BIGNUM *Lets_encrypt_sig = BN_new();
  BN_hex2bn(
      &Lets_encrypt_sig,
      "4ee2895d0a031c9038d0f51ff9715cf8c38fb237887a6fb0251fedbeb7d886068ee90984"
      "cd72bf81f3fccacf5348edbdf66942d4a5113e35c813b2921d055fea2ed4d8f849c3adf5"
      "99969cef26d8e1b4240b48204dfcd354b4a9c621c8e1361bff77642917b9f04bef5deacd"
      "79d0bf90bfbe23b290da4aa9483174a9440be1e2f62d8371a4757bd294c10519461cb98f"
      "f3c47448252a0de5f5db43e2db939bb919b41f2fdf6a0e8f31d3630fbb29dcdd662c3fb0"
      "1b6751f8413ce44db9acb8a49c6663f5ab85231dcc53b6ab71aedcc50171da36ee0a182a"
      "32fd09317c8ff673e79c9cb54a156a77825acfda8d45fe1f2a6405303e73c2c60cb9d63b"
      "634aab4603fe99c04640276063df503a0747d8154a9fea471f995a08620cb66c33084dd7"
      "38ed482d2e0568ae805def4cdcd820415f68f1bb5acde30eb00c31879b43de4943e1c804"
      "3fd13c1b87453069a8a9720e79121c31d83e2357dda74fa0f01c81d1771f6fd6d2b9a8b3"
      "031681394b9f55aed26ae4b3bfeaa5d59f4ba3c9d63b72f34af654ab0cfc38f76080df6e"
      "35ca75a154e42fbc6e17c91aa537b5a29abaecf4c075464f77a8e8595691662d6ede2981"
      "d6a697055e6445be2cceea644244b0c34fadf0b4dc03ca999b098295820d638a66f91972"
      "f8d5b98910e289980935f9a21cbe92732374e99d1fd73b4a9a845810c2f3a7e235ec7e3b"
      "45ce3046526bc0c0");
  BIGNUM *M7 = BN_new();
  BN_mod_exp(M7, Lets_encrypt_sig, e2, ISRG_Root_X1_modulus, ctx4);

  BIGNUM *lets_encrypt_hash = BN_new();
  BN_hex2bn(
      &lets_encrypt_hash,
      "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
      "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF003031300D06096086"
      "48016503040201050004202AAE3FB7BF05E4C81C4194DCA44511D4F9AF304786EC1AE721"
      "8409CF62A08355");
  if (BN_cmp(M7, lets_encrypt_hash)) {
    printf("The intermediate cert was signed by the ISRG Root CA\n");
    printBN("Expected hash: ", lets_encrypt_hash);
    printBN("Actual hash:   ", M7);
  } else {
    printf("The \'Let's Encrypt Intermediate\' cert was forged\n");
    printBN("Expected hash: ", lets_encrypt_hash);
    printBN("Actual hash:   ", M7);
  }

  BIGNUM *Lets_encrypt_modulus = BN_new();
  // modulus of Lets encrypt intermediate CA
  BN_hex2bn(&Lets_encrypt_modulus,
            "BA87BC5C1B0039CBCA0ACDD46710F9013CA54EA561CB26CA52FB1501B7B928F528"
            "1EED27B324183967090C08ECE03AB03B770EBDF3E53954410C4EAE41D69974DE51"
            "DBEF7BFF58BDA8B713F6DE31D5F272C9726A0B8374959C4600641499F3B1D922D9"
            "CDA892AA1C267A3FFEEF58057B089581DB710F8EFBE33109BB09BE504D5F8F9176"
            "3D5A9D9E83F2E9C466B3E106664348188065A037189A9B843297B1B2BDC4F81500"
            "9D2788FBE26317966C9B27674BC4DB285E69C279F0495CE02450E1C4BCA105AC7B"
            "406D00B4C2413FA758B82FC55C9BA5BB099EF1FEEBB08539FDA80AEF45C478EB65"
            "2AC2CF5F3CDEE35C4D1BF70B272BAA0B4277534F796A1D87D9");

  BIGNUM *apache_signature = BN_new();
  BN_hex2bn(&apache_signature,
            "54ed77d736d2eddaf19bb1438e6bb43ee36865e04ceedb4fabd671be1a0d6769c5"
            "94372090fccc570c4d5973bbb5d29a31d7694089fff513b618d77906a0a3f4825f"
            "783964e195df974512237646f165f1e71d27be60ef63d315e47adeba93ecaade2f"
            "de1ee29d45e2700a5eecb2ac5b1e3d1b0d3e0ebbbcced5bfbded1d76b89e507bee"
            "38e65eb49e272f138e4269e48bc26127f14ec3ffd21dd5d506016d15b17c710599"
            "ac8079652522f647dadc64a77de034bbcc346a6788e760e48b3057330011e314fd"
            "58850ee3bf5c6ddc60f31c60a2f49edf8909b966f1d6e4b4ec07fcb070cef774be"
            "057547d4ed477c57dfc90257026e45a91392005796279bbaa8");
  BIGNUM *M8 = BN_new();
  BN_mod_exp(M8, apache_signature, e2, Lets_encrypt_modulus, ctx4);
  BIGNUM *apache_hash = BN_new();
  BN_hex2bn(&apache_hash,
            "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
            "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
            "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
            "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
            "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
            "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
            "FFFFFFFFFF003031300D060960864801650304020105000420BF0516268F4E45B3"
            "C748D76990A0879A70A8EF941C3E62276CD22888A295DAD6");
  if (BN_cmp(M8, apache_hash)) {
    printf("The Apache cert was signed by the Let's Encrypt Intermediate CA\n");
    printBN("Expected hash: ", apache_hash);
    printBN("Actual hash:   ", M8);
  } else {
    printf("The \'Apache\' cert was forged\n");
    printBN("Expected hash: ", apache_hash);
    printBN("Actual hash:   ", M8);
  }
  // here we are freeing the memory we used
  BIGNUM *bn_list[] = {p,
                       q,
                       e1,
                       private_key,
                       n1,
                       e2,
                       M1,
                       c1,
                       d,
                       c2,
                       plaintext1,
                       M2,
                       M3,
                       c3,
                       c4,
                       M4,
                       S1,
                       M5,
                       n2,
                       S2,
                       M6,
                       ISRG_Root_X1_modulus,
                       Lets_encrypt_sig,
                       lets_encrypt_hash,
                       M7,
                       Lets_encrypt_modulus,
                       apache_signature,
                       apache_hash,
                       M8};
  size_t i, count = sizeof(bn_list) / sizeof(bn_list[0]);
  for (i = 0; i < count; i++) {
    if (bn_list[i]) {
      BN_free(bn_list[i]);
      bn_list[i] =
          NULL; // setting the pointer to NULL to prevent use after free bugs
    }
  }
  BN_CTX_free(ctx1);
  BN_CTX_free(ctx2);
  BN_CTX_free(ctx3);
  BN_CTX_free(ctx4);
  ctx1 = ctx2 = ctx3 = ctx4 =
      NULL; // setting the pointer to NULL to prevent use after free bugs
  return EXIT_SUCCESS;
}
void printBN(char *msg, BIGNUM *a) {
  char *number_str = BN_bn2hex(a);
  printf("%s %s\n", msg, number_str);
  // Free the dynamically allocated memory
  OPENSSL_free(number_str);
}
BIGNUM *task_1(BIGNUM *p, BIGNUM *q, BIGNUM *e, BN_CTX *ctx1) {
  BIGNUM *phi_n = BN_new();
  BIGNUM *p_minus_1 = BN_dup(p);
  BIGNUM *q_minus_1 = BN_dup(q);
  // p_minus_1 = p_minus_1 - 1
  BN_sub_word(p_minus_1, 1);
  // q_minus_1 = q_minus_1 - 1
  BN_sub_word(q_minus_1, 1);
  // phi_n = (p -1) * (q-1) == p_minus_1 - q_minus_1
  BN_mul(phi_n, p_minus_1, q_minus_1, ctx1);
  BIGNUM *d = BN_new();
  // d = inv(phi_n, e)
  BN_mod_inverse(d, e, phi_n, ctx1);
  BIGNUM *BN_list[] = {p_minus_1, q_minus_1, phi_n};
  size_t i, count = sizeof(BN_list) / sizeof(BN_list[0]);
  for (i = 0; i < count; i++) {
    if (BN_list[i]) {
      BN_free(BN_list[i]);
      BN_list[i] = NULL;
    }
  }
  return d;
}
