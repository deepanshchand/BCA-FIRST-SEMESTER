#include<stdio.h>
int main(){
    int n,last,first,sum;
    printf("enter four digit number = ");
    scanf("%d",&n);
    //for first digit logic;
    first = n/1000;
    //for last digit logic;
    last = n%10;
   sum = first+last;
   printf("the  sum of first and last digit is = %d",sum);
   return 0;
}