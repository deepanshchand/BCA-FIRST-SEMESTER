#include <stdio.h>
int main()
{
    // define data type;
    int n, i;

    // take input ;
    printf("enter number = ");
    scanf("%d", &n);

    // starting for loop;
    int first = 0, second = 1;
    for (i = 1; i <= n; i++)
    {
        // logic
        int result = first + second;
        second = first;
        first = result;
        printf("%d\t", result);
    }

    return 0;
}