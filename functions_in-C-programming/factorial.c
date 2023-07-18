#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @num: the number inputed by the user.
 * @result: the calculated factorial returned to main.
 * Return: 0.
 */
int factorial(int num)
{
    int i;
    int result = 1;
    if (num<0)
        return -1;
    for(i=1; i<=num; i++)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    int num;
    printf("Enter a number you would like to find its factorial: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}