#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * return: 0
 */
int main(void)
{
	double a, b, temp;
	printf("Hello user, Enter both numbers you wish to swap: ");
	scanf("%lf%lf", &a, &b);
	printf("Your values before swapping are: a = %.2f, b = %.2f", a, b);

	temp = a;
	a = b;
	b = temp;
	
	printf("\nYour values after swapping are: a = %.2f, b = %.2f", a, b);
	return 0;
}