#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @num: the 2-digit number inputed by the user.
 * @max_digit: calculates the maximum digit between 2 digits.
 * Return: 0.
 */
void max_digit(int num)
{
    if (num > 99 || num < 10)
        printf("Error!, Please enter a 2-digit number\n");
    else
    {
        if (num%10 > num/10)
            printf("The maximum number between %d is %d\n", num, num%10);
        else
            printf("The maximum number between %d is %d\n", num, num/10);
    }
}
int main()
{
    int num;
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);
    max_digit(num);
    return 0;
}