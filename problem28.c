#include<stdio.h>
int main (){
float number[5],total=0,avg=0;
int i,positive=0;
printf("Enter the first number:");
scanf("%f",&number[0]);
printf("Enter the second number:");
scanf("%f",&number[1]);
printf("Enter the third number:");
scanf("%f",&number[2]);
printf("Enter the fourth number:");
scanf("%f",&number[4]);
printf("Enter the fifth number:");
scanf("%f",&number[5]);
for(i=0;i<5;i++){
  if(number[i]>0)
  {
      positive++;
      total=total + number[i];
  }
}
    avg=total/positive;

printf("Number of the positive number :%d\n",positive);
printf("Average value of the positive number :%.2f",avg);
return 0;
}
