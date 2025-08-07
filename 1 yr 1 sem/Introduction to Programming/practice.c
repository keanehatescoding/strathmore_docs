#include <stdio.h>
int main()
{
  FILE* ptr;
  ptr = fopen("proj","w");
  fputs("C programming is fun\n",ptr);
  fputs("And, I love C language", ptr);
  fclose(ptr);
}
