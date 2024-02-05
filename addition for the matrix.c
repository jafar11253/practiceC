#include<stdio.h>
int main(){
int first[10][10],second[10][10],sum[10][10],r1,c1,r2,c2,i,j;
printf("Enter the first row and column:");
scanf("%d %d",&r1,&c1);
printf("Enter the second row and column:");
scanf("%d %d",&r2,&c2);
if(r1!=r2||c1!=c2)
{
    printf("this matrix isn't possible");
    return 1;
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("first[%d][%d]=",i,j);
        scanf("%d",&first[i][j]);
    }
}
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("second[%d][%d]=",i,j);
        scanf("%d",&second[i][j]);
    }
}
printf("first matrix:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",first[i][j]);
    }
    printf("\n");
}
printf("second matrix:\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        printf("%d\t",second[i][j]);
    }
    printf("\n");
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        sum[i][j]=first[i][j]+second[i][j];
    }
}
printf("Sum of the two matrix:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
return 0;
}
