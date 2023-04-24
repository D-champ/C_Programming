#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @a: the first term in the sequence.
 * @n: the index of the term we want to find i.e n=1 for first term and so on.
 * @d: the common difference between consecutive terms.
 * @an: the nth term in the sequence.
 * note - this program is only for arithmetic sequence.
 * return: 0
 */
int main(void)
{
    int a, n, d, an;

    printf("what is the first term in the sequence: ");
    scanf("%d", &a);
    printf("Input the index of the term you are looking for: ");
    scanf("%d", &n);
    printf("Can you tell me the difference between consecutive terms in the sequence: ");
    scanf("%d", &d);

    an = a + ((n-1) * d);

    printf("the nth term of your sequence is: %d\n", an);
    return 0;
}