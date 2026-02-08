#include<stdio.h>
int main(){
 
    int n,note100,note50,note10,note5,note2,note1,total;
    printf("enter number n = ");
    scanf("%d",&n);

    //for note100;
    note100 = n/100;
    n=n%100;
//for note50;
    note50 = n/50;
    n=n%50;
   
//for note10;
    note10 = n/10;
    n=n%10;
//for note5;
    note5 = n/5;
    n=n%5;
//for note2;
    note2 = n/2;
         n=n%2;
  //for note1;
         note1=n;
//add all note;
    total = note100+note50+note10+note5+note2+note1;
    // note100 =
    printf("total number of minimum note = %d\n",total);
    printf("100 = %d \n",note100);
      printf("50 = %d \n",note50);
        printf("10 = %d\n",note10);
          printf("5 = %d\n",note5);
            printf("2 = %d\n",note2);
             printf("1 = %d\n",note1);

    return 0;
}