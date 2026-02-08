#include<stdio.h>
int main(){
    //define data types;
    int basic_salary;
    float dearness_allowance,house_rent_allowance,gross_salary;
    printf("enter Ramesh's basic salary = ");
    scanf("%d",&basic_salary);
//convert percent into rs of Ramesh expenses;
    dearness_allowance = (40/100.0)*basic_salary;
    house_rent_allowance = (20/100.0)*basic_salary;

//add his salary and expance; 
 gross_salary = basic_salary+dearness_allowance+house_rent_allowance;
 printf("the gross salary of Ramesh's is = %.2f",gross_salary);
    return 0;
}