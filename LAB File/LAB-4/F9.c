
#include <stdio.h>

// create function for factorial;
int factorial(int n)
{
    if (n != 0)
    {
        return n * factorial(n - 1); // recursion;
    }
    else
    {
        return 1;
    }
}

// main function;
int main()
{
    int x;
    printf("enter positive number = ");
    scanf("%d", &x);

    // call by value;
    printf("factorial of %d = %d", x, factorial(x));

    return 0;
}