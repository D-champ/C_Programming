#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * @rseconds: remaining seconds after getting the hours and minutes.
 * 1 hour = 3600 seconds.
 * Return: 0.
 */
int main (void)
{
    int seconds, hours, minutes, rseconds;
    printf("This is a program to convert inputed seconds into hours, minutes and remaining seconds.\n");
    printf("minimum seconds allowed is 3600 :)\n");
    printf("Input the seconds you would like to convert: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds - (hours * 3600)) / 60;
    rseconds = (seconds - (hours * 3600)) % 60;

    printf("Your coversion is Total hours : %d Total minutes: %d Total seconds: %d\n", hours, minutes, rseconds);
    return 0;
}