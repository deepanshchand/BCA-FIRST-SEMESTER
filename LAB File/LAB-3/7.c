#include<stdio.h>
int main(){
    //define data type;
    int n,i;
    int sum_of_even=0,sum_of_odd=0;
    //take input;
    printf("enter number = ");
    scanf("%d",&n);
    //starting for loop;
    for(i=1;i<=n;i++){
        //condition for even number;
        if(i%2==0){
            sum_of_even +=i;
        }else{
            sum_of_odd +=i;
        }
    }
    //print output;
    printf("sum of even number between 1 to %d = %d\n",n,sum_of_even);
    printf("sum of odd number between 1 to %d = %d\n",n,sum_of_odd);
    
    return 0;
}