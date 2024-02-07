#include<stdio.h>
int main()
{
 int a,b;
 printf("Read the integer from keyboard-");
 scanf("%d",&a);
 a<<=3;
 b=a;
 printf("The left shifted data is=%d",b);
 return 0;
}
