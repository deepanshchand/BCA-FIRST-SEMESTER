#include <stdio.h>
int main()
{
    // define 2d array and take input;
    int arr[5][5];
    printf("enter total 25 element for (5x5) matrix :\n");

    // insert the array;

    // outer i loop for row;
    for (int i = 0; i < 5; i++)
    {
        // inner j loop for column;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // traverse the array;

    // assume that index arr[0][0] is already largest;
    int largest = arr[0][0];
    // outer i loop for row;
    for (int i = 0; i < 5; i++)
    {
        // inner j loop for column;
        for (int j = 0; j < 5; j++)
        {
            if (largest < arr[i][j])
            {
                largest = arr[i][j];
            }
        }
    }

    // print output;
    printf("the largest number on (5x5) matrix = %d", largest);

    return 0;
}