#include <stdio.h>

int main(void) 
{
   int x, y;
   printf ("Enter the first value ");
   scanf ("%d", &x);
   printf("Enther the second value ");
   scanf ("%d", &y);
   if (x > y) {
      printf ("%d is larger than %d\n", x, y);
   }
   else if (x < y) {
      printf ("%d is smaller than %d\n", x, y);
   }
   else {
      printf ("They are equal\n");
   }
   return 0;
}