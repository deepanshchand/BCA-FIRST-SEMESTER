
#include <stdio.h>

// create power function;
int power(int a, int b)
{

    int pow = 1, i;
    for (i = 1; i <= b; i++)
    {
        pow *= a;
    }

    return pow;
}

// main function;
int main()
{
    int x, y;
    printf("enter number and raised power : ");
    scanf("%d %d", &x, &y);

    // call by value;
    printf("%d raised to power %d = %d", x, y, power(x, y));

    return 0;
}