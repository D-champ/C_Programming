#include <stdio.h>
#include <stdlib.h>
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
    printf("Your AVERAGE GRADE is %.2f \n", (float)sum/count);

    return 0;
}