#include <stdio.h>
int main()
{
    int Ram_age, Shyam_age, Ajay_Age;
    printf("Enter Ram age : ");
    scanf("%d", &Ram_age);
    printf("Enter Shyam age : ");
    scanf("%d", &Shyam_age);
    printf("Enter Ajay age : ");
    scanf("%d", &Ajay_Age);

    if (Ram_age > Shyam_age)
    {
        if (Shyam_age > Ajay_Age)
        {
            printf("Ajay is youngest : %d", Ajay_Age);
        }
        else
        {
            printf("Shyam is yougnest : %d", Shyam_age);
        }
    }
    else
    {
        if (Ram_age > Ajay_Age)
        {
            printf("Ajay is youngest : %d", Ajay_Age);
        }
        else
        {
            printf("Ram is youngest : %d", Ram_age);
        }
    }
    return 0;
}