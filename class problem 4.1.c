#include<stdio.h>
int main(){
int month,day;
printf("Enter the number of days:");
scanf("%d",&day);
month=day/30;
day=day%30;
printf("months:%d",month);
return 0;

}
