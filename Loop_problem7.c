#include <stdio.h>
int main() {
int r,c,n;
printf("Enter the number of rows and columns: ");
scanf("%d", &n);
for (r=1;r<=n;r++)
{
    for (c=1;c<r;c++)
    {
     printf(" ");
    }
    for (c=1;c<=n;c++)
    {
     printf("*");
    }

     printf("\n");
}
return 0;
}
