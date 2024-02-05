#include <stdio.h>
int main() {
int x, y, i, sum=0;
printf("\nInput the first integer: ");
scanf("%d", &x);
printf("\nInput the second integer: ");
scanf("%d", &y);
for(i = x; i <= y; i++) {
if((i%17)!=0){
sum+=i;
}
}
printf("sum:%d",sum);
return 0;
}
