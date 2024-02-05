#include<stdio.h>
int main(){
int i;
float s=0;
for(i=1;i<=50;i++)
{
    s=s+(float)1/i;
}
printf("value of the s:%.2f",s);
return 0;
}
