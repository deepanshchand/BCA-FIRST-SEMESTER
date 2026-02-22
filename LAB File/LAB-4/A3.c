#include <stdio.h>
int main()
{
    // define array and take 5 element input from user;
    int arr[5];
    printf("enter 5 element (interger) = ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // define 2nd array for store reverse element;
    int newarr[5];
    int key = 4; // key variable use for access second array location in reverse order;
    for (int i = 0; i < 5; i++)
    {
        newarr[key] = arr[i];
        key--; // decrement by 1;
    }

    // print output ;
    printf("array in reverse order = ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", newarr[i]);
    }

    return 0;
}