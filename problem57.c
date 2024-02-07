#include<stdio.h>
int main(){
int x,num,rev=0;
printf("The original number :");
scanf("%d",&num);
while(num>=1)
{
    x=num%10;
    rev=rev*10+x;
    num=num/10;
}
printf("the reverse of the said number=%d",rev);
return 0;
}
