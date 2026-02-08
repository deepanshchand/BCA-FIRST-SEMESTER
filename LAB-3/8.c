#include<stdio.h>
int main(){
    //define data type;
    int n;
    //take input;
    printf("enter number = ");
    scanf("%d",&n);
    printf("reverse digit of %d = ",n);
    //starting while loop;
    while(n>0){
        int r = n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}