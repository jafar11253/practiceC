#include<stdio.h>
int main(){
int n,count=1;
printf("Enter the number of line:");
scanf("%d",&n);
for(int i =0;i<n;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",count);
        count++;
    }
printf("\n");
}
return 0;
}
