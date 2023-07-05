#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry.
 * @min_max: determine the maximum and minimum between two inputed numbers.
 * Return: 0.
*/

void min_max(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("Maximum : %d\n", num1);
        printf("Minimum: %d\n", num2);
    }
    else
    {
        printf("Maximum : %d\n", num2);
        printf("Minimum: %d\n", num1);
    }
}

int main()
{
    int a, b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    min_max(a, b);
    return 0;
}