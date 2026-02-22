#include<stdio.h>
int main(){
    //define data type;
    int n,factorial=1,i;
    //take input;
    printf("enter number = ");
    scanf("%d",&n);
    //starting for loop;
    for(i=n;i>=1;i--){
        factorial =factorial*i;
    }
    //print factorial;
    printf("factorial of %d is = %d",n,factorial);

    return 0;
    
}