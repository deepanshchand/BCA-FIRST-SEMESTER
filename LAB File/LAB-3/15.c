#include <stdio.h>
int main()
{
    // define data type;
    int n;
    // take input;
    printf("enter number = ");
    scanf("%d", &n);

    // starting while loop;
    int r, rev = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        // store reverse digit in rev variable;
        rev = rev * 10 + r;
    }
    printf("reverse number = %d", rev);

    return 0;
}