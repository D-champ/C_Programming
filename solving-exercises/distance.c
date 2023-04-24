#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - entry.
 * Return: 0.
 */
int main ()
{
    float x1,y1,x2,y2;
    float distance;

    printf("This a program to calculate the distance between two(2) points\nEnter X1: ");
    scanf("%f", &x1);
    printf("Enter Y1: ");
    scanf("%f", &y1);
    printf("Enter X2: ");
    scanf("%f", &x2);
    printf("Enter Y2: ");
    scanf("%f", &y2);

    distance = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));

    printf("The distance between the points is: %.2f units\n", distance);
}