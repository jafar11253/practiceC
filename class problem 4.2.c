#include<stdio.h>
int main (){
int a,n;
printf("Enter the value of lower limit:");
scanf("%d",&a);
printf("Enter the value of upper limit:");
scanf("%d",&n);
while(a<n){
    printf("%d\n",a);
    a*=a;
}
return 0;
}
