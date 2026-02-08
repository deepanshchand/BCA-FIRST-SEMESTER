#include <stdio.h>
#include <math.h>
int main()
{
    // define data type;
    int n, i;
z
    // take input;
    printf("enter number = ");
    scanf("%d", &n);

    // use long long int is use for store large value;
    long long int sum = 0;
    // starting loop;
    for (i = 1; i <= n; i++)
    {
        long long int power = pow(i, i);
        sum += power;
    }
    // print sum;
    printf("sum of the series = %lld\n", sum);
    return 0;
}