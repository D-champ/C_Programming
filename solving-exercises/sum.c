#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @a: the first term in the sequence.
 * @d: the common difference of the sequence.
 * @n: the number of terms in the sequence.
 * sum - sum of the arithemetic sequence.
 * return: 0
 */
int main(void)
{
    float a, d, n;
    float s, sum;

    printf("Enter the first term of the sequence: ");
    scanf("%f", &a);
    printf("Enter the common difference of the sequence: ");
    scanf("%f", &d);
    printf("Enter the number of terms in the sequence: ");
    scanf("%f", &n);
    
    s = (2 * a) + ((n - 1) * d);
    sum = (n / 2) * s;

    printf("The sum of the arithemetic sequence is: %.2f\n", sum);
    return 0;
}