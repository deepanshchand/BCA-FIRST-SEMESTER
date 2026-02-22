#include<stdio.h>
int main(){
    float f,c;
    printf("enter the city temperature in fahrenheit degree = ");
    scanf("%f",&f);
    //logic
    c=(f-32)*5/9;

    printf("The city temperature in centigrade = %.2fc",c);
    return 0;

}