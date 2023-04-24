#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @ms: monthly salary of an employee.
 * @thw: total hours worked in the month.
 * Return: 0.
 */
int main(void)
{
    int a, b, c, d; 
    int ms, thw;
    printf("What is the salary per hour of your company: ");
    scanf("%d", &a);
    printf("What is the estimated hours worked for in a day: ");
    scanf("%d", &b);
    printf("What is the number of working days in the week: ");
    scanf("%d", &c);
    printf("What is the number of weeks you worked for in the month: ");
    scanf("%d", &d);
    
    thw = b * c * d;
    ms = a * thw;

    printf("Your monthly salary is: %d\n", ms);
    return 0; 
}