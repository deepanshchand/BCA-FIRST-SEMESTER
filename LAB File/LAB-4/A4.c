#include <stdio.h>
int main()
{
    // define array and take input from user ;
    int arr[10];
    printf("enter 10 integers number = ");

    // insert;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // insert target from user;
    int target;
    printf("enter target element = ");
    scanf("%d", &target);

    // traverse array;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    // print output;
    printf("%d occurs %d time", target, count);

    return 0;
}