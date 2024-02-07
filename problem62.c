#include <stdio.h>
int main() {
int num, sum = 0;
printf("Enter a positive integer less than 500: ");
scanf("%d", &num);
if (num < 1 || num >= 500) {
printf("Invalid input. Please enter a positive integer less than 500.\n");
return 1;
}
while (num != 0) {
sum=sum+num % 10;
num=num/10;
}
printf("Sum of digits: %d\n", sum);
return 0;
}
