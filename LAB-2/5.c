#include <stdio.h>
int main()
{
    int r, num_1, num_2, rev_num = 0;
    printf("Enter finve digit number : ");
    scanf("%d", &num_1);
    num_2 = num_1;
    // reversing the number;
    r = num_2 % 10;
    rev_num = rev_num * 10 + r;
    num_2 /= 10;

    r = num_2 % 10;
    rev_num = rev_num * 10 + r;
    num_2 /= 10;

    r = num_2 % 10;
    rev_num = rev_num * 10 + r;
    num_2 /= 10;

    r = num_2 % 10;
    rev_num = rev_num * 10 + r;
    num_2 /= 10;
    
    r = num_2 % 10;
    rev_num = rev_num * 10 + r;
    printf("reverse number is : %d\n", rev_num);

    if (num_1 == rev_num)
    {
        printf("original number is equal to reverse number");
    }
    else
    {
        printf("original number is not equal to reverse number");
    }
    return 0;
}