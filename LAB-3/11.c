#include<stdio.h>
int main(){
    //define data type;
    int n,reverse=0;

    //take input;
    printf("enter number = ");
    scanf("%d",&n);

    //create a copy of orginal number for compare in last;
    int copy=n;
    
    //starting for reverse the number;
    while(copy>0){
        int r = copy%10;
        //store reverse number;
        reverse = reverse*10+r;
        copy = copy/10;
    }
    
    // comparing reverse number and orginal number ;
    if(n==reverse){
        printf("%d is a palindrome number ",n);
    }else{
        printf("%d is not a palindrome number ",n);
    }

    return 0;
    
}