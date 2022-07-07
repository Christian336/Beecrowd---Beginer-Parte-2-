#include <stdio.h>

int main(){

float x;

scanf("%f" , &x);

if(x >= 0 && x <= 2000)
  printf("Isento\n");

else if(x >= 2000.01 && x <= 3000)
  printf("R$ %.2f\n" , (x - 2000) * 0.08);

else if(x >= 3000.01 && x <= 4500){
  float a = (x-2000);
  float b = (a - 1000);
  printf("R$ %.2f\n" , 80 + (b * 0.18));
}


else if(x >= 4500.01){
  float a = (x-2000);
  float b = (a - 1000);
  float c = (b - 1500);
  printf("R$ %.2f\n" , 80 + (0.18 * 1500) + (c * 0.28));
}
return 0;
  }