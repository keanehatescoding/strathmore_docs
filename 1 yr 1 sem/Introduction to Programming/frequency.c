#include <stdio.h>
#include <math.h>

int main()
{
  double I=0.47,R=0.072,f;

  for (float c=0.01;c<0.1;c+=0.01) {
    f = sqrt((I-R*R)/(4*c*c)); 
    printf("The frequency of the electrical circuit is %lf\n", f);
  }
  
  return 0;
}
