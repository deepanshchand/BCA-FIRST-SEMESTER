#include<stdio.h>
int main(){
    int l,b;
    float r;
    printf("enter the length and breadth of rectangle = ");
    scanf("%d %d",&l,&b);

    printf("enter the radius of circle = ");
    scanf("%f",&r);

    int area = l*b;
    int perimeter = 2*(l+b);
    float area_circle = 3.14*r*r;
    float circumference_circle = 2*3.14*r;

    printf("the area of rectangle = %d \nperimeter of rectangle = %d\n",area,perimeter);
    printf("the area of circle = %.2f\ncircumference of circle = %.2f\n",area_circle,circumference_circle);

    return 0;
}
