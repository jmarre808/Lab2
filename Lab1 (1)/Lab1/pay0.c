#include <stdio.h>

int main()
{    /* declarations */
     int id_number;
     float hours_worked,
          rate_of_pay,
          pay;

     /* print title */
    printf("***Pay Calculation***\n\n");

     /* initialize variables */
     id_number = 123;
     hours_worked = 20.0;
     rate_of_pay = 7.5;

     /* calculate pay */
     pay = hours_worked * rate_of_pay;

     /* print data and results */
     printf("ID Number = %d\n", id_number);
     printf("Hours Worked = %.2f, Rate of Pay = %.2f\n",
               hours_worked, rate_of_pay);
     printf("Pay = %.2f\n", pay);
     return 0;
}