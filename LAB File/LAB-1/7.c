#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter side1 (perpendicular) = ");
    scanf("%d",&side1);

     printf("enter side2 (base) = ");
    scanf("%d",&side2);

     printf("enter side3 (hypotenuse) = ");
    scanf("%d",&side3);
    
  float area = 0.5*side1*side2;
  printf("the area of triangle = %.2f",area);
   return 0;
}
