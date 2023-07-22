#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * Return: 0.
 */
char* repeatNines(int num)
{
    if (num <= 0)
    {
        return NULL;
    }

    char* result = (char*)malloc(num + 1);
    if (result == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < num; i++)
    {
        result[i] = '9';
    }
    result[num] = '\0';

    return result;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    char* ninesString = repeatNines(number);

    if (ninesString != NULL)
    {
        printf("%s\n", ninesString);
        free(ninesString);
    }
    else
    {
        printf("Please enter a positive number greater than zero.\n");
    }

    return 0;
}