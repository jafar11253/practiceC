#include<stdio.h>
int main(){
float i,n,sum=0;
printf("input the number of n:\n");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
    sum=sum+(1/i);
}
printf("sum of the series:%f",sum);
return 0;
}
