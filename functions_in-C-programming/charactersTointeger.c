#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @characterstointeger: this function converts character to integers.
 * @main: passes three characters to the `charactersTointeger` function.
 * Return: 0.
 */

int charactersTointeger(char character1, char character2, char character3)
{
    int hundred, tens, units;
    int finalresult;
 
    if (character1 >= '0' && character1 <= '9')
        hundred = character1 - '0';
    else
        return 0;

    if (character2 >= '0' && character2 <= '9')
        tens = character2 - '0';
    else
        return 0;

    if (character3 >= '0' && character3 <= '9')
        units = character3 - '0';
    else
        return 0;
    
    finalresult = (hundred*100 + tens*10 + units); 
    return finalresult;
}
int main()
{
    char char1, char2, char3;
    int numericValue;

    printf("Enter num 1: ");
    scanf(" %c", &char1);

    printf("Enter num 2: ");
    scanf(" %c", &char2);

    printf("Enter num 3: ");
    scanf(" %c", &char3);

    numericValue = charactersTointeger(char1, char2, char3);
    printf("The converted value is: %d\n", numericValue);

    return 0;
}