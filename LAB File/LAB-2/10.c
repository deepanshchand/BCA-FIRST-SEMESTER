#include <stdio.h>
int main()
{
    int num1, num2;
    char operator;
    printf("Enter num1 operator num2 : ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        printf("%d", num1 + num2);
        break;

    case '-':
        printf("%d", num1 - num2);
        break;

    case '*':
        printf("%d", num1 * num2);
        break;

    case '/':
        printf("%d", num1 / num2);
        break;
    }
    return 0;
}