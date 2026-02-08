#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, aggregate, percentage;
    printf("Enter sub1 marks : ");
    scanf("%f", &sub1);

    printf("Enter sub1 marks : ");
    scanf("%f", &sub2);

    printf("Enter sub1 marks : ");
    scanf("%f", &sub3);

    printf("Enter sub1 marks : ");
    scanf("%f", &sub4);

    printf("Enter sub1 marks : ");
    scanf("%f", &sub5);

    aggregate = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = aggregate / 500 * 100;

    if (percentage >= 60)
    {
        printf("Percentage = %.2f%% , First division", percentage);
    }

    else if (percentage >= 50 && percentage <= 59)
    {
        printf("Percentage = %.2f%% , Second division", percentage);
    }

    else if (percentage >= 40 && percentage <= 49)
    {
        printf("Percentage = %.2f%% , Third division", percentage);
    }

    else
    {
        printf("Percentage = %.2f%% , fail", percentage);
    }

    return 0;
}