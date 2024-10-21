#include <stdio.h> 
#include <stdlib.h> 

void compute();
double input();
double get_mean(double ,double ,double ,double ,double );
const char* get_grade(double);
void show(double ,const char*);

int main()
{ 
  int number, count = 0;
  char ch;

  printf("How many students do you want to compute their scores? ");

  // Confirm the no. of students given is a whole number
  while ((scanf("%i",&number) != 1) || number < 1)
  {
    // clears the buffer after invalid input
    while ((ch = getchar()) != '\n' && ch != EOF);
    printf("Please type a realistic number of students: ");
  }
  // Clears the buffer after valid input
  while ((ch = getchar())!= '\n' && ch != EOF);

  for (;count<number;count++) {
    compute();
  }
  return EXIT_SUCCESS;
}
void compute (){
  double math, eng, kisw, sci, sstCre, mean;
  const char* grade;

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
  char ch;

  // Read the initial input
  while (scanf("%lf",&mark) != 1 || mark<0 || mark>100) {
    // Clears the input buffer after invalid input 
    while ((ch = getchar())!= '\n' && ch != EOF);
    printf("\nInvalid Mark! Try again marks[0-100]: ");
  }
  // Clears the input buffer after valid input 
  while ((ch = getchar())!= '\n' && ch != EOF);
  return mark;
}

double get_mean(double math, double eng, double kisw, double sci, double sstCRE){
  return (math + eng + kisw + sci + sstCRE)/5;
}

const char* get_grade(double mean){
  if (mean >= 80) 
    return "A";
  if (mean >= 75) 
    return "A-";
  if (mean >= 70) 
    return "B+";
  if (mean >= 65) 
    return "B";
  if (mean >= 60) 
    return "B-";
  if (mean >= 55)
    return "C+";
  if (mean >= 50)
    return "C";
  if (mean >= 45)
    return "C-";
  if (mean >= 40)
    return "D+";
  if (mean >= 35)
    return "D";
  if (mean >= 30)
    return "D-";
  if (mean >=0)
    return "E";
  return "Invalid";
}
void show(double mean,const  char* grade){
  printf("This candidate got the mean mark %.2f and the grade %s\n", mean, grade);
}
