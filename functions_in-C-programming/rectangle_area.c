#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @h: the height of the rectangle.
 * @w: width of the rectangle
 * @rectangle_area: the function used to calculate the rectangle area.
 * Return: 0.
 */
float rectangle_area(float height, float width)
{
    float area;
    area = height * width;
    return area;
}
int main()
{
    float h, w;
    printf("Enter your height: ");
    scanf("%f", &h);
    printf("Enter your width: ");
    scanf("%f", &w);
    printf("The Area of your rectangle is: %.2f\n", rectangle_area(h, w));
    return 0;
}