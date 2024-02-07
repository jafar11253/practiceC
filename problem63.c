#include<stdio.h>
int main()
{
 int n,i,j,sum=0;
 printf("Input a positive number less than 100:");
 scanf("%d",&n);
 if(n<1||n>100){
 printf("invalid input");
 return 0;
 }
 j=1;
 for(i=1;j<=n;i++)
 {
     sum=sum+(j*j*j*j);
     j=j+i;
 }
 printf("Sum of the series :%d",sum);
 return 0;
}
