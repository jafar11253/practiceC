#include<stdio.h>
int main(){
int n,i,max;
printf("Enter the number of array:");
scanf("%d",&n);
int a[n];
printf("Enter the value of the array:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++){
    if(a[i]>max)
        max =a[i];
}
return 0;
}
