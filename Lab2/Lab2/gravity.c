#include <stdio.h>

#include <stdlib.h>
int main(){
   float time,gravity,distance,velocity;
   /* set the time */
   printf("Enter An Amount\n");
   scanf("%f", &time);
   /* set gravity */
   gravity = 32;
   /* compute the velocity */
   velocity = time * gravity;
   /* compute the distance */
   distance = gravity * time * time / 2;
/* print the result */
   printf("An object falling %.2f feet in %.2f seconds ", distance, time);
   printf("is traveling %.2f ft/sec\n", velocity);
  return 0;
}
