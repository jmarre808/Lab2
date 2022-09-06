#include <stdio.h>
#include <stdlib.h>
int main(){
  
//identify variables//
float celc, fahren, x1;
//ask user for value of f//
printf("enter temperature in farenheight:\n");
scanf("%f", & fahren);
  //compute farenheight to celsius//
x1 = fahren - 32;
celc = x1 * 5/9;
  //print celcius value//
printf("the temperature in celcius is: %f \n", celc);
  return 0;
  }
        