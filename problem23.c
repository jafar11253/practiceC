#include<stdio.h>
int main(){
float a,b,c,p;
printf("Input the first number: ");
scanf("%f",&a);
printf("Input the second number: ");
scanf("%f",&b);
printf("Input the third number: ");
scanf("%f",&c);
if(a<(b+c)&&b<(a+c)&&c<(a+b))
{
p=a+b+c;
printf("Perimeter = %.1f",p);
}
else
{
printf("Not possible to create a triangle");
return 0;
}
}
