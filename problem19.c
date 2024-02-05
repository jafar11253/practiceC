#include<stdio.h>
int main() {
int p,q,r,s;
printf("\nInput the 1st integer:");
scanf("%d",&p);
printf("\n Input the 2nd integer:");
scanf("%d",&q);
printf("\n Input the 3rd integer:");
scanf("%d",&r);
printf("\n Input the 4th integer:");
scanf("%d",&s);
if((q>r)&&(s>p)&&(r+s)>(p+q)&&(r>0)&&(s>0)&&(p%2==0))
{
printf("Correct values\n");
}
else{
printf("Incorrect values\n");
}
return 0;
}
