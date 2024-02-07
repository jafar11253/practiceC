#include<stdio.h>
#define n 5
int main(){
int a[6],i,temp;
printf("Input the 5 number of array:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<(n/2);i++)
{
  temp=a[i];
  a[i]=a[n-(i+1)];
  a[n-(i+1)]=temp;
}
for(i=0;i<n;i++)
    {
    printf("a[%d]=%d\n",i,a[i]);
    }
return 0;

}
