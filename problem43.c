#include<stdio.h>
int main(){
int x,y,count=1;
printf("Enter the number of line:");
scanf("%d",&x);
printf("Enter the number of characters in a line:");
scanf("%d",&y);
for(int i =1;i<=x;i++){
    for(int j=1;j<=y;j++){
        printf("%d\t",count);
        count++;
    }
printf("\n");
}
return 0;
}
