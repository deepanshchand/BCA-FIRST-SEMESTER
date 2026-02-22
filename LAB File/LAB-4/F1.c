#include<stdio.h>

//create function for factorial ;
int factorial(int n){
    //storing factorial value in fact;
    int i;
    int fact=1;
    for( i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

//main function;
int main(){
    int x;
    printf("enter positive number = ");
    scanf("%d",&x);

    //pass by value;
    printf("factorial of %d is = %d",x,factorial(x));

    return 0;
}