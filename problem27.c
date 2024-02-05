#include <stdio.h>
int main() {
float numbers[5];
int j, positive =0, negative =0;
printf("Input the first number: ");
scanf("%f", &numbers[0]);
printf("Input the second number: ");
scanf("%f", &numbers[1]);
printf("Input the third number: ");
scanf("%f", &numbers[2]);
printf("Input the fourth number: ");
scanf("%f", &numbers[3]);
printf("Input the fifth number: ");
scanf("%f", &numbers[4]);
for(j = 0; j < 5; j++) {
if(numbers[j] > 0)
{
positive++;
}
else if(numbers[j] < 0)
{
negative++;
}
}
printf("\nNumber of positive numbers: %d", positive);
printf("\nNumber of negative numbers: %d", negative);
return 0;
}
