#include<stdio.h>;
int main()
{
float p,r,t,interest;
printf("Input principle, Rate of interest ,time to find simple interest:");
scanf("%f%f%f",&p,&r,&t);
interest=(p*r*t)/100;
printf("Simple interest = %f",interest);
return 0;
}
