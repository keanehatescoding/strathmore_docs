#include <stdio.h> 
#include <math.h>

double compute();
double input();
double get_mean(double , double , double , double , double );
char get_grade(double );
void show(double , char );

int main()
{ 
  int number;
  printf("\nHow many student do you want to enter their Math, English, Kiswahili, Science, SST/C.R.E score? ");
  while (number<0 || typedeff(number) == int)
  scanf("%i",&number);

  for (int count = 0;count< number;count++) {
    compute();
  }
  return 0;

}
double compute (){
  double math, eng, kisw, sci, sstCre, mean;
  char grade;
  printf("\n\n Enter marks for the students\n");
  printf("\n Input marks for Math: ");
  math = input();
  printf("\n Input marks for English: ");
  eng = input();
  printf("\n Input marks for Kiswahili: ");
  kisw = input();
  printf("\n Input marks for Science: ");
  sci = input();
  printf("\n Input marks for SST/CRE: ");
  sstCre = input();

  mean = get_mean(math, eng, kisw, sci, sstCre);
  grade = get_grade(mean);
  show(mean,grade);
}

double input () {
  double mark;
  scanf("%lf",&mark);
  while (mark<0|| mark>100) {
    printf("\nInvalid Mark! Try again marks[0-100]\n");
    scanf("%lf",&mark);
  }
  return mark;
}

double get_mean(double math, double eng, double kiswa, double sci, double sstCRE){
  return (math + eng + kiswa + sci + sstCRE)/5;
}

char get_grade(double mean){
  return "EEDDCCBBAAA"[(int)round(mean/10)];
}

void show(double mean, char grade){
  printf("This candidate got the mark %.2f and the grade %c\n",mean,grade);
}
