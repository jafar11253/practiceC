#include <stdio.h>
int width, height, area, perimeter;
int main() {
height = 7;
width = 5;
perimeter = 2*(height + width);
printf("Perimeter of the rectangle = %d\n", perimeter);
area = height * width;
printf("Area of the rectangle = %d\n", area);
return(0);
}
