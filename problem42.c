#include<stdio.h>
int main(){
int n,i;
printf("Input the number of line: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("%d\t%d\t%d\n",i,i*i,i*i*i);
}
return 0;
}
