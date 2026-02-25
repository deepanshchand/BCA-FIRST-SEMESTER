#include <stdio.h>
int main()
{
    // input for celsus;
    int c1;
    printf("Enter celsus = ");
    scanf("%d", &c1);

    // input for fahrenheit;
    int f2;
    printf("Enter fahrenheit = ");
    scanf("%d", &f2);

    // Logic to celsus to fahrenheit;
    int f1;
    f1=1.8*c1+32;

    // Loic for fahrenheit into celsus;
    int c2;
    c2 = (f2 - 32) * 5 / 9;

    // Print Output
    printf("The Convert of %d celsus to fahrenheit = %d\n", c1, f1);
    printf("The Convert of %d fahrenheit to celsus = %d", f2, c2);

    return 0;
}