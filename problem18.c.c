#include<stdio.h>
int main(){
int day,y,m,d;
printf("input the number:");
scanf("%d",&day);
y=day/365;
m=(day%365)/30;
d=day-((y*365)+(m*30));
printf("year: %d\n",y);
printf("month: %d\n",m);
printf("day:%d\n",d);
return 0;
}
