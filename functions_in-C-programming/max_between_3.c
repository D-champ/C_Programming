#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @max_between_3: the function used to determine the maximum between three given numbers. 
 * Return: 0.
 */
int max_between_3()
{
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else return num3;
    else if (num2 > num3)
        return num2;
        else return num3;
}
int main()
{
    int max;
    max = max_between_3();
    printf("The maximum between the three numbers is: %d\n", max);
    return 0;
}