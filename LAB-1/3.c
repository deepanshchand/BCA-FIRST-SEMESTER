#include<stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    printf("enter marks of subject 1  (max 100)= ");
    scanf("%f",&sub1);

    printf("enter marks of subject 2  (max 100)= ");
    scanf("%f",&sub2);

    printf("enter marks of subject 3  (max 100)= ");
    scanf("%f",&sub3);

    printf("enter marks of subject 4  (max 100)= ");
    scanf("%f",&sub4);

    printf("enter marks of subject 5  (max 100)= ");
    scanf("%f",&sub5);

    //logic;
   float aggregate_marks = sub1+sub2+sub3+sub4+sub5;
   float percentage = aggregate_marks/5;

   printf("Aggregate marks of student = %.2f\n",aggregate_marks);
   printf("Percentage marks obtained by the student = %.2f%%",percentage);
   
   return 0;
}