#include<stdio.h>
int main(){
    int n,r,a,b,c,d,e;
    printf("enter five digit number = ");
    scanf("%d",&n);
  
    
    //logic;
    r=n%10;
    e=r+1;
    n=n/10;
    
    r=n%10;
    d=r+1;
    n=n/10;

    r=n%10;
    c=r+1;
    n=n/10;

    r=n%10;
    b=r+1;
    n=n/10;

    r=n%10;
    a=r+1;
    n=n/10;

     printf("the new digit number = %d%d%d%d%d",a,b,c,d,e);
    return 0;
}                                                                   
