#include <stdio.h>
int main()
{
    // define data type;
    int n, count = 0;
    // take input;
    printf("enter number = ");
    scanf("%d", &n);

    // startind while loop;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    // print count;
    printf("total digit in a number  = %d", count);
    return 0;
}