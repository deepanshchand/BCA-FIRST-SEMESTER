#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b : ");
    scanf("%d",&b);

    // Logic;
    int c;
    c = a;
    a = b;
    b = c;
    printf("a : %d\n",a);
    printf("b : %d",b);
    
    return 0;
}

