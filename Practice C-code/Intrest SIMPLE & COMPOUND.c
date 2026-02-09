#include <stdio.h>
#include <math.h>
int main()
{
    // int p, r, t;
    printf("Enter Principle(P) : ");
    scanf("%d", &p);
    printf("Enter Rate(R) : ");
    scanf("%d", &r);
    printf("Enter Time(T) : ");
    scanf("%d", &t);

    float si;
    si=p*r*t/100.0;

    //Logic for compund interest;
    float div,pow, amount,ci; //define data type;
    div =(100+r)/100.0;
    pow=powf(div,t);
    amount=p*pow;
    ci = amount-p;

    //Print Output;
    printf("Simple interest is = %.2f\n",si);
    printf("The compund intrest is = %.2f",ci);

    return 0;
}