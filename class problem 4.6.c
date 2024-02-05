#include<stdio.h>
int main (){
int n;
float sum=0;
printf("Enter the value of n :");
scanf("%d",&n);
for(int i =1; i<=n; i++){
    sum=sum+1.0/i ;
}
printf("sum of the series:%f",sum);
return 0;
}
