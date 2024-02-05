#include<stdio.h>
int main (){
int x;
printf("Input the integer:");
scanf("%d",&x);
if(x==0){
    printf("Even");
}
else if (x>0&&(x%2)==0){
    printf("positive even");
}
else if (x>0&&(x%2)!=0){
    printf("positive odd");
}
else if(x<0&&(x%2)==0){
    printf("negative even");
}
else if(x<0&&(x%2)!=0){
    printf("negative odd");
}
return 0;
}
