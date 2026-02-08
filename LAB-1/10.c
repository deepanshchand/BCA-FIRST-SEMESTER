#include<stdio.h>
int main(){
    //define data type;
    int n,sum=0,r;
    printf("enter five digits number = ");
    scanf("%d",&n);
    
    // logic to seperate each digits;
    // first digit;
        r=n%10;
        sum+=r;
        n=n/10;

        //second digit;
        r=n%10;
        sum+=r;
        n=n/10;
        
        //third digit;
        r=n%10;
        sum+=r;
        n=n/10;

        // fourth digit;
        r=n%10;
        sum+=r;
        n=n/10;

        //fifth digth;
        r=n%10;
        sum+=r;
        n=n/10;
        
    // print output;
    printf("the sum of digits  = %d",sum);
    
    return 0;
}