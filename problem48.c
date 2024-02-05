#include<stdio.h>
int main(){
int ar[7];
printf("Enter the value of array:");
for(int i=0;i<5;i++){
    scanf("%d",&ar[i]);
}
for(int i=0;i<5;i++){
    if(ar[i]<=0){
       ar[i]=100;
}
}
printf("output of the array:");
for(int i=0;i<5;i++){
printf("n[%d]=%d\n",i,ar[i]);
}
return 0;
}
