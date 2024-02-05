#include <stdio.h>

int main() {
   int upperLimit;

   printf("Enter the upper limit: ");
   scanf("%d", &upperLimit);

   printf("Squares of even numbers from 1 to %d:\n", upperLimit);

   for (int i = 2; i <= upperLimit; i += 2) {
       printf("%d ", i * i);
   }

   printf("\n");

   return 0;
}
