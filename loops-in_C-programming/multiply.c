#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @mult: multiplicator
 * Return: 0.
 */
int main()
{
    //multiplication table
    int i, num;
    int mult;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the multiplicator: ");
    scanf("%d", &mult);

    for (i=1; i<=mult; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}