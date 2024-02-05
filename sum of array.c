#include<stdio.h>
int main(){
int a[10],i,n,sum=0;
printf("Enter the number of array:");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
    sum=sum + a[i];
}
printf("sum of the array:%d",sum);
return 0;
}
