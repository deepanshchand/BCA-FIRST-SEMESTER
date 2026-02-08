
#include<stdio.h>

// create function for sum;
int sumf(int n){
    if(n>0){
        int r = n%10;                                                                
        return r+sumf(n/10);
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("enter 5 digit number = ");
    scanf("%d",&num);

    printf("sum of digits = %d",sumf(num));

    return 0;
}