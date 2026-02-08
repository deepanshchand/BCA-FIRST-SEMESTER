#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number = ");
    scanf("%d",&a);

    printf("enter second number = ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("the first number is = %d\n",a);
    printf("the second number is = %d",b);

    return 0;
}