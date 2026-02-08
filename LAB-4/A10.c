#include <stdio.h>
int main()
{
    // take input size of array by user;
    int s;
    printf("enter size of array = ");
    scanf("%d", &s);

    // define array;
    int arr[s];

    // insert array by user;
    printf("enter %d element in array = ", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    // traverse array;
    for (int i = 0; i < (s / 2); i++)
    {
        int temp = arr[i];         // temp = a;
        arr[i] = arr[s - (i + 1)]; // a=b;
        arr[s - (i + 1)] = temp;   // b=temp;
    }

    // print output;
    printf("reverse of array = ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}