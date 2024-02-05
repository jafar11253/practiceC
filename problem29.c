#include<stdio.h>
int main (){
int number[5],total=0;
int i;
printf("Enter the first number:");
scanf("%d",&number[0]);
printf("Enter the second number:");
scanf("%d",&number[1]);
printf("Enter the third number:");
scanf("%d",&number[2]);
printf("Enter the fourth number:");
scanf("%d",&number[3]);
printf("Enter the fifth number:");
scanf("%d",&number[4]);
for(i=0;i<5;i++){
  if((number[i]%2)!=0)
  {
      total=total + number[i];
  }
}

printf("Sum of all odd number :%d\n",total);

return 0;
}
