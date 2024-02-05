
#include <stdio.h>
int main() {
    int num1, num2, product;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    product = num1 * num2;
    if (product == num1 * num2) {
        printf("The integers are multiplied.");
    } else {
    printf("The integers are not multiplied.");
    }
    return 0;
}
