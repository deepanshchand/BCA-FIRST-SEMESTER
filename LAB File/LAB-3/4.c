#include<stdio.h>
int main(){
    //define data type;
    int n,i;
    //take input;
    printf("enter number = ");
    scanf("%d",&n);
    //starting for loop;
    for(i=1;i<=10;i++){
        //print table;
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;

}