#include <stdio.h>

int main()
{
  char use;
  int account_number, units, peak_hours, peak_units, offpeak_hours, offpeak_units, peak_bill, offpeak_bill, bill;

  printf("What is your account number? ");
  scanf("%i", &account_number);

  printf("Are you esing electricity commercially(C), industrially(I) or for residential use(R)? ");
  scanf(" %c",&use);

  switch (use) {
    case 'R':
      printf("Please enter the number of tokens used: ");
      scanf("%i", &units);

      bill = 500 + 4.8*units;

      printf("The bill for account number %i is %i\n", account_number, bill);
      break;

    case 'C':
      printf("Please enter the number of tokens used: ");
      scanf("%i", &units);

      if (units<=1000) {
        bill = 50000; 
      } else {
        bill = 50000 + 3.75*(units-1000);
      }

      printf("The bill for account number %i is %i\n", account_number, bill);
      break;

    case 'I':
      printf("Please enter the number of total hours you have used electricity during peak hours: ");
      scanf("%i", &peak_hours);

      printf("Please enter the number of units used during the peak hours: ");
      scanf("%i", &peak_units);

      if(peak_units <=1000){
        bill = 68000;
        printf("Your bill for during peak hours is sh. 68000\n");
      } else {
        peak_bill = 68000 + 5.60 * (peak_units-1000);
      }
      printf("Please enter the number of total hours you have used electricity during offpeak hours: ");
      scanf("%i", &offpeak_hours);

      printf("Please enter the number of units used during offpeak hours: ");
      scanf("%i", &offpeak_units);

      if(offpeak_units <=1000){
        bill = 37000;
      } else {
        offpeak_bill = 68000 + 2.75 * (offpeak_units-1000);
        bill = peak_bill + offpeak_bill;
      }
      printf("The bill for account number %i is %i\n", account_number, bill);
    break;

    default:
      printf("Please input a character. Either 'C' or 'R' or 'I'\n");
      break;
  }
  return 0;
}

