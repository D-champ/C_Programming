#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @calc: the math operation or arithemetic sign.
 * Return: 0.
 */
int main()
{
    int num1, num2;
    char calc;

    printf("Enter your arithemetic sign: ");
    scanf("%c", &calc);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    switch(calc)
    {
        case '+':
            printf("%d %c %d = %d\n", num1, calc, num2, num1+num2);
            break;
        case '-':
            printf("%d %c %d = %d\n", num1, calc, num2, num1-num2);
            break;
        case '/':
            if(num2 == 0)
                printf("You cannot divide by 0! \n");
            else
                printf("%d %c %d = %d\n", num1, calc, num2, num1/num2);
            break;
        case '*':
            printf("%d %c %d = %d\n", num1, calc, num2, num1*num2);
            break;
        case '%':
            printf("%d %c %d = %d\n", num1, calc, num2, num1%num2);
            break;
        default:
            printf("ERROR\n");
            break;
    }
    
    return 0;
}