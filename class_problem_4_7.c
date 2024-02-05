#include<stdio.h>
int main(){
int n;
float sum=0;
for(n=1;n<=10;n++){
        sum=sum+1.0/n;
    printf("%d  %f\n",n,sum);
}
return 0;
}
