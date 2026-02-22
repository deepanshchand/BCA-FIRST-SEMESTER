#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf("Enter angle a : ");
    scanf("%d", &angle1);
    printf("Enter angle b : ");
    scanf("%d", &angle2);
    printf("Enter angle c : ");
    scanf("%d", &angle3);
    if (angle1 + angle2 + angle3 == 180)
    {
        printf("this is valid triangle.");
    }
    else
    {
        printf("this is invalid triangle.");
    }
    return 0;
}
