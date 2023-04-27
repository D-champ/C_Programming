#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * Return: 0.
 */
int main ()
{
    int a,b,c;
    int max, min;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    max = a;
    min = b;

    if (a < b)
    {
        max = b;
        min = a;
    }
    if (max < c)
        max = c;
    if (c < min)
        min = c;

    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}