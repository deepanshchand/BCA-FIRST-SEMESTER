#include <stdio.h>
int main()
{
    // define 2d two array for insert;
    int arr1[3][3], arr2[3][3];

    // insert element in  first array;
    printf("enter first matrix element:-\n");
    // outer loop i for row;
    for (int i = 0; i < 3; i++)
    {
        // inner loop j for colum;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    // insert element in second array;
    printf("enter second matrix element:-\n");
    // outer loop i for row;
    for (int i = 0; i < 3; i++)
    {
        // inner loop j for colum;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // create one more loop for for store result;
    int Rarr[3][3];
    // traverse ;
    // outer loop i for column of result;
    for (int i = 0; i < 3; i++)
    {
        // mid loop  k row of result;
        for (int k = 0; k < 3; k++)
        {
            Rarr[k][i] = 0; // reset k and i;
            // inner j loop use like common on arr1 and arr2;
            for (int j = 0; j < 3; j++)
            {
                Rarr[k][i] += arr1[k][j] * arr2[j][i];
            }
        }
    }

    // print result;
    printf("result:-\n");
    // outer loop i for row;
    for (int i = 0; i < 3; i++)
    {
        // inner loop j for colum;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", Rarr[i][j]);
        }
        // change line;
        printf("\n");
    }

    return 0;
}