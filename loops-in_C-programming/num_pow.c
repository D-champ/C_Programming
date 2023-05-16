#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @result: holds the value after while loop has been executed and 1 if power is equal to 0.
 * @temp: it holds the value of the power before entering the while loop.
 * Return: 0.
 */
int main()
{
    int num, pow;
    int result = 1;
    int temp;
    printf("Input your number and its power\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);
    temp = pow;

    while (pow > 0)
    {
        result*=num; /* result = result * num */
        pow--;
    }

    printf("%d in the power of %d is : %d\n", num, temp, result);
    return 0;
}