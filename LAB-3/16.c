#include<stdio.h>
int main(){
    int j,i;
    //outer loop for 1 to 100;
    for( i=1;i<=100;i++){
        //inner loop for check condition;
        for( j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        //if condition true then print;
        if(j==i){
            printf("%d\t",i);
        }

    }
    return 0;
}