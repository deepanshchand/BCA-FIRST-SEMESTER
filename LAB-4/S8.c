/*
Write a program that receives an integer
(max 9 digits) and prints the number in words.
*/

#include <stdio.h>

int main()
{
    // Words Arrays
    char *ones[30] = {"", "One", "Two", "Three", "Four", "Five",
                      "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                      "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    char *tens[30] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                      "Sixty", "Seventy", "Eighty", "Ninety"};

    // input;
    long int n;
    printf(" enter number : ");
    scanf("%ld", &n);

    // crore;
    int part = n / 10000000;
    if (part > 0)
    {
        if (part < 20)
        {
            printf("%s crore ", ones[part]);
        }
        else
        {
            printf("%s %s crore ", tens[part / 10], ones[part % 10]);
        }
    }
    n = n % 10000000;

    // lakh;
    part = n / 100000;
    if (part > 0)
    {
        if (part < 20)
        {
            printf("%s lakh ", ones[part]);
        }
        else
        {
            printf("%s %s lakh ", tens[part / 10], ones[part % 10]);
        }
    }
    n = n % 100000;

    // thousand;
    part = n / 1000;
    if (part > 0)
    {
        if (part < 20)
        {
            printf("%s thousand ", ones[part]);
        }
        else
        {
            printf("%s %s thousand ", tens[part / 10], ones[part % 10]);
        }
    }
    n = n % 1000;

    // hundred;
    part = n / 100;
    if (part > 0)
    {
        printf("%s hundred ", ones[part]);
    }
    n = n % 100;

    // ones;
    if (n > 0)
    {
        if (n < 20)
        {
            printf("%s ", ones[n]);
        }
        else
        {
            printf("%s %s ", tens[n / 10], ones[n % 10]);
        }
    }

    return 0;
}