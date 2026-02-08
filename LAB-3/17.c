#include <stdio.h>
int main()
{
    // define data type;
    int n, i;
    // take input;
    printf("enter number =");
    scanf("%d", &n);

    // starting loop ;
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    // if condition is true than print number is prime;
    if (i == n)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is not prime", n);
    }

    return 0;
}