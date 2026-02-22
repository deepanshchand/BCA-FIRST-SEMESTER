#include <stdio.h>
int main()
{
    float basic_salary, DA, HRA, gross_salary;
    printf("Enter Basic Salary : ");
    scanf("%f", &basic_salary);
    if (basic_salary < 1500)
    {

        DA = basic_salary * 0.9;                // DA 90% of basic salary;
        HRA = basic_salary * 0.1;               // HRA 10% of basic salary;
        gross_salary = basic_salary + DA + HRA; // add DA and HRA with basic salary;
        printf("DA : %.2f\nHRA : %.2f\ngross salary : %.2f\n", DA, HRA, gross_salary);
    }
    else
    {
        DA = basic_salary * 0.98;               // DA 98% of basic salary;
        HRA = 500;                              // HRA Rs.500;
        gross_salary = basic_salary + DA + HRA; // add DA and HRA with basic salary;
        printf("DA : %.2f\nHRA : %.2f\ngross salary : %.2f\n", DA, HRA, gross_salary);
    }
    return 0;
}