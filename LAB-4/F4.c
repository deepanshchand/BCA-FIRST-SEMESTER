

#include <stdio.h>

// create a function for leap year;
void leapyear(int n)
{

    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
    {
        printf("%d is a leap year", n);
    }
    else
    {
        printf("%d is not a leap year", n);
    }
}

// main function;
int main()
{
    int x;
    printf("enter year = ");
    scanf("%d", &x);

    // call by value;
    leapyear(x); // call the function;

    return 0;
}