#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nInput the first integer: ");
    scanf("%d", &a);
    printf("\nInput the second integer: ");
    scanf("%d", &b);
    printf("\nInput the third integer: ");
    scanf("%d", &c);
    if(a>b && a>c)
    printf("First number is the biggest");
    else if(b>a && b>c)
    printf("Second number is the biggest");
    else
    printf("Third number is the biggest");
    return 0;
}
