#include <stdio.h>
#include <math.h>

int main()
{
    // define data type;
    int n;

    // take input;
    printf("enter number = ");
    scanf("%d", &n);

    // start while loop for check how many digit in number;
    int copy = n, count = 0;
    while (copy > 0)
    {
        copy = copy / 10;
        count++;
    }

    // use second loop for caculate armstrong number ;
    int copy2 = n, r, result, sum = 0;
    while (copy2 > 0)
    {
        r = copy2 % 10;
        result = pow(r, count);
        sum += result;
        copy2 = copy2 / 10;
    }

    // comparing original number (n) with sum;
    if (sum == n)
    {
        printf("%d is a armstrong number", n);
    }
    else if (n == 0)
    {
        printf("%d is a armstrong number", n);
    }
    else
    {
        printf("%d is not a armstrong number", n);
    }

    return 0;
}