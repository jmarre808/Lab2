#include <stdio.h>

int main()
{
   float time;
   float gravity;
   float distance;
   float velocity;
   /*  set the time  */
   time = 10;

   /*  set gravity  */
   gravity = 32;

   /*  compute the velocity */
   velocity = time * gravity; 

   /*  compute the distance  */
   distance = 0.5 * time * gravity * gravity;

/*  print the result  */
   printf("An object falling %f feet in %f seconds ", distance, time);
   printf("is traveling %f ft/sec\n", velocity);
}