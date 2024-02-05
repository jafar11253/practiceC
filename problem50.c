#include<stdio.h>
int main(){
int n[5],i,max = 5;
printf("Input the five number of the array:");
for(i=0;i<5;i++)
    scanf("%d",&n[i]);
for(i=0;i<5;i++){
if(n[i]<max){
    printf("A[%d]=%d\n",i,n[i]);
}
}
return 0;
}
