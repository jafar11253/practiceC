#include <stdio.h>
int main()
{
int x, y, i, total = 0;
printf("\nInput a pair of numbers(for example 10,2):");
printf("\nInput first number of the pair: ");
scanf("%d", &x);
printf("\nInput second number of the pair: ");
scanf("%d", &y);
if (x<y)
{
 printf("Invalid input:First number should be greater than the second one ");
return 1;
}
printf("\nList of odd numbers: ");
for(i = y; i<=x; i++)
{
if ((i%2) != 0)
{
printf("%d\n", i);
total += i;
}
}
printf("Sum=%d\n",total);
return 0;
}
