#include <stdio.h>
int main()
   {
	float w1, c1, w2, c2,Average;
    printf("Weight - Item1: ");
	scanf("%f", &w1);
	printf("No. of item1: ");
	scanf("%f", &c1);
	printf("Weight - Item2: ");
	scanf("%f", &w2);
	printf("No. of item2: ");
	scanf("%f", &c2);
	Average = ((w1 * c1) + (w2* c2)) / (c1 + c2);
	printf("Average Value = %f\n",Average);
	return 0;
}
