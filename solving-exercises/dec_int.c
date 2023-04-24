#include <stdio.h>

int main() 
{
    int num;
    int units, tens, hundreds, thousands, th;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    th = num;
    units = num % 10;
    num /= 10;
    tens = num % 10;
    num /= 10;
    hundreds = num % 10;
    num /= 10;
    thousands = num % 10;
    num /= 10;

    printf("The reverse number of %d is : %d%d%d%d\n", th, units, tens, hundreds, thousands);
    return 0;
}