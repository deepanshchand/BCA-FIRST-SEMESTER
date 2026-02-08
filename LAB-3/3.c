#include<stdio.h>
int main(){
    //define data type;
    int n,i,sum=0;
    //take input;
    printf("enter number = ");
    scanf("%d",&n);
//starting for loop;
    for(i=1;i<=n;i++){
        sum +=i;    //store value of i in sum;
    }
    //print sum;
    printf("sum of %d is = %d",n,sum);

    return 0;

}