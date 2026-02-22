#include <stdio.h>
int main()
{
    // define array and take input from user;
    int arr[10];
    printf("enter 10 integers number = ");

    // insert;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // assume 0 index element  is smallest element ;
    int smallest = arr[0];
    // traverse from index 1 because we already assume the 0 index element is samllest;
    for (int i = 1; i < 10; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    // print output;
    printf("smallest element on array = %d", smallest);

    return 0;
}