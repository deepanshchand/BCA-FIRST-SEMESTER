#include<stdio.h>
int main(){
    //define data type;
    int n,sum=0;

    //take input ;
    printf("enter number = ");
    scanf("%d",&n);

    // this statement print in result;
    printf("sum of %d digit = ",n);

    //start while loop;
    while(n>0){
        int r = n%10;
        sum += r;
        n = n/10;
    }
    
    //print sum;
    printf("%d",sum);
    return 0;
}