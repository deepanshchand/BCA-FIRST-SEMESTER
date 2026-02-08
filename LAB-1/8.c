#include<stdio.h>
int main(){
    int n,r;
    printf("enter five digit number =  ");
    scanf("%d",&n);
    printf("the reverse of %d is = ",n);
    
    //to get first reverse number ;
        r=n%10;
        n=n/10;
       printf("%d",r);

       //to get second reverse number ;
        r=n%10;
        n=n/10;
       printf("%d",r);

        //to get third reverse number ;
        r=n%10;
        n=n/10;
       printf("%d",r);

        //to get fourth reverse number ;
        r=n%10;
        n=n/10;
       printf("%d",r);

        //to get fivth reverse number ;
        r=n%10;
        n=n/10;
       printf("%d",r);
    return 0;
}