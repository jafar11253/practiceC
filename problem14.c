#include <stdio.h>
int main()
{
int x;
float y;
printf("Input total distance in km: ");
scanf("%d",&x);
printf("Input total fuel spent in liters: ");
scanf("%f", &y);
printf("Average fuel consumtion %.3f ",x/y);
return 0;
}
