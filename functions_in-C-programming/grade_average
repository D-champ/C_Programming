#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry.
 * Return: 0
*/
float grade_average(int calc1, int calc2)
{
    float avg;
    avg = calc1 / calc2;
    return avg;
}
   
int main()
{   
    int grade;
    int sum = 0, count = 0;
    printf("Enter your grade per subject or '-1' to stop: ");
    scanf("%d", &grade);

    while (grade!=-1)
    {
        sum+=grade;
        count++;
        printf("Enter your grade per subject or '-1' to stop: ");
        scanf("%d", &grade);
    }

    printf("You entered %d grades! \n", count);
        printf("Your AVERAGE GRADE is %.2f \n", grade_average(sum, count));
        
    return 0;
}