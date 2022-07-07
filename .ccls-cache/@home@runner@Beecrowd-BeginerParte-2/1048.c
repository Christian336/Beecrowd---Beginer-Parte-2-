#include <stdio.h>

int main(){

float x , y;
  int p;

  scanf("%f" , &x);

  if(x >= 0 && x <= 400){
    y = x * 0.15;
    x += y;
    p = 15;
  }

  else if(x >= 400.01 && x <= 800){
    y = x * 0.12;
    x += y;
    p = 12;
  }
    
else if(x >= 800.01 && x <= 1200){
  y = x * 0.10;
  x += y;
  p = 10;
}

  else if(x >= 1200.01 && x <= 2000){
    y = x * 0.07;
    x += y;
    p = 7;
  }

  else if(x > 2000){
    y = x * 0.04;
    x += y;
    p = 4;
  }

printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n" , x , y , p);

  return 0;
}