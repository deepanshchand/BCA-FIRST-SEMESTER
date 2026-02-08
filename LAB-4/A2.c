#include <stdio.h>
int main()
{
    // define array and take 10 element input from user;
    int arr[10];
    printf("enter 10 element = ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // traverse array ;
    for (int i = 0; i < 10; i += 2)
    {
        arr[i] = arr[i] + arr[i + 1];
        arr[i + 1] = arr[i] - arr[i + 1];
        arr[i] = arr[i] - arr[i + 1];
    }

    // print output ;
    printf("array after inter change element = ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}