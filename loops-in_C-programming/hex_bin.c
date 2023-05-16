#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * (decimal >> i): extracts a specific bit from the decimal value by performing a right shift operation.
 * &1:  used to perform a bitwise AND operation between the result of the shifting operation (decimal >> i) and the value 1.
 * Return: 0
 */

int main() 
{
    char hex;
    printf("Enter a hexadecimal digit (0-9, A-F): ");
    scanf("%c", &hex);

    int decimal;
    if (hex >= '0' && hex <= '9')
    {
        decimal = hex - '0';
    }
    else if (hex >= 'A' && hex <= 'F')
    {
        decimal = hex - 'A' + 10;
    }
    else
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Binary representation: ");
    for (int i = 3; i >= 0; i--)
    {
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}