#include<stdio.h>

int main() {
    int n;
    printf("Input how many numbers you want to input:\n");
    scanf("%d", &n);

    int a[n], i, minimum_value, maximum_value, average, sum = 0;

    printf("Input %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    minimum_value = a[0];
    maximum_value = a[0];

    for (i = 1; i < n; i++) {
        if (minimum_value > a[i]) {
            minimum_value = a[i];
        }
        if (maximum_value < a[i]) {
            maximum_value = a[i];
        }
    }

    average = sum / n;

    printf("Minimum value: %d\n", minimum_value);
    printf("Maximum value: %d\n", maximum_value);
    printf("Average number: %d\n", average);

    return 0;
}
