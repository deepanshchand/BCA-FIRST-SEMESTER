#include<stdio.h>
int main(){
    float c,f,k;
    printf("enter centigrade degrees = ");
    scanf("%f",&c);

    //centigrade degrees to fahrenheit degrees;
    f=(c*1.8)+32;
     //centigrade degrees to kelvin ;
     k=c+273.15;

     printf("temperature in fahrenheit = %.2ff\n",f);
     printf("temperature in kelvin = %.2fk ",k);
     return 0;
}
