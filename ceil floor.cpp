#include <stdio.h>
#include <math.h>

int main()
{
   double num ;
   printf("enter a number : ");
   scanf("%.2f",&num);
   int result;

   result = ceil(num);
   printf("Ceiling integer of %.2f = %d", num, result);

   return 0;
}
