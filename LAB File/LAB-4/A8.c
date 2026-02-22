#include <stdio.h>
int main()
{
    // define 2d array and take input from user;
    int arr[3][5];
    printf("enter total 15 element for (3x5) matrix :\n");

    // insert the array;

    // outer loop i for row;
    for (int i = 0; i < 3; i++)
    {
        // inner loop j for column;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // traverse the array and create one more array to store transpose element;
    int tarr[5][3];

    // outer loop i for row;
    for (int i = 0; i < 3; i++)
    {
        // inner loop j for column;
        for (int j = 0; j < 5; j++)
        {
            tarr[j][i] = arr[i][j];
        }
    }

    // print transpose matrix;

    // outer loop i for row;
    printf("transpose of matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        // inner loop j for column;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", tarr[i][j]);
        }
        // change line;
        printf("\n");
    }

    return 0;
}