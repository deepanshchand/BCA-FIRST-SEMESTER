#include<stdio.h>
int main(){
    float n,ft,in,m,cm;
    
    printf("enter distance n (in kilometer) = ");
    scanf("%f",&n);

  // convert km to m 1km = 1000m;
  m = n*1000;

  //convert km to cm 1km = 100000cm;
  cm=n*100000;

  //convert km to ft 1km = 3280.84ft;
ft=n*3280.84;

//convert km to inch  1km = 39370.1in;
in = n*39370.1;

printf("convert %.2fkm to m = %.2fm\n ",n,m);
printf("convert %.2fkm to cm = %.2fcm\n",n,cm);
printf("convert %.2fkm to ft = %.2fft\n ",n,ft);
printf("convert %.2fkm to inch = %.2fin\n",n,in);
   return 0;
}
