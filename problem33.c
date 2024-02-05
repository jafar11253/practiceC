#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int number[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    int max = number[0];
    int position = 1;
    for (int i = 1; i < n; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
            position = i + 1;
        }
    }
    printf("The highest value is %d, and its position is %d.\n", max, position);
    return 0;
}


