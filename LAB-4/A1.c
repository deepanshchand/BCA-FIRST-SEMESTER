#include <stdio.h>
int main()
{
    // declared array and insert input;
    int marks[30];
    printf("enter marks of student = ");
    for (int i = 0; i < 30; i++)
    {
        scanf("%d", &marks[i]);
    }

    // declared variable for store sum and traverse array;
    int sum = 0;
    for (int i = 0; i < 30; i++)
    {
        sum += marks[i];
    }

    // print result;
    printf("Average = %.2f", (float)sum / 30);

    return 0;
}