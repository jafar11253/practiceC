#include<stdio.h>
int main(){
int n;
printf("Input the length of the array:\n");
scanf("%d",&n);
int a[n],i,small_value,position;
printf("input the number of the element:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
small_value=a[0];
position=0;
for(i=0;i<n;i++)
{
    if(small_value>a[i])
    {
        small_value=a[i];
        position=i;
    }
}
printf("small value:%d\n",small_value);
printf("position of the element :%d",i);
return 0;

}
