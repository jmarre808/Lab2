#include <stdio.h>
#include <stdlib.h>
int main(){
       int t;
       int seconds;
       int hours, minutes;
        /*  get the number of seconds  */
       printf("Enter the number of seconds:");
       scanf("%d", &seconds);

        /*  compute the number of hours  */
       hours = seconds / 3600;

        /*  compute the number of minutes  */
       minutes = seconds / 60 % 60 ;

        /*  compute the number of seconds remaining  */
       seconds = seconds  % 60;

        /*  print the result  */
       printf("there are %d hours, %d minutes, %d seconds,\n",
                hours, minutes, seconds);
       return 0;
        }
       