#include<stdio.h>
int main(){
    //define data type ;
    int number,power,r=1;
    //take input;
    printf("enter number or power = ");
    scanf("%d %d",&number,&power);

    //start while
    while(power>0){
        r=r*number;
        power--;
    }
    printf("answer = %d",r);
    return 0;
}