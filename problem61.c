#include<stdio.h>
#include<math.h>
int main(){
float x,value;
printf("Enter the value of x :");
scanf("%f",&x);
if(x!=0)
{
  value=sin(1/x);
  printf("value of the sin(1/x):%.4f",value);
}
else
printf("value of the x should not be zero");

return 0;
}
