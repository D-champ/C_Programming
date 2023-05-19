#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * Return: 0.
 */
int main()
{
    int n;
    int i, j;
    printf("Enter your number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}