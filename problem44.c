#include<stdio.h>
int main (){
int mark[99],i;
float f,a=0,total=0;
printf("Input mathematical number:(o to terminal) ");
for(i=0; ;i++)
{
    scanf("%d",&mark[i]);
    if(mark[i]<=0){
        break;
    }
    a++;
    total=total+mark[i];
}
f=total/a;
printf("average marks in mathematic:%.2f",f);
return 0;
}
