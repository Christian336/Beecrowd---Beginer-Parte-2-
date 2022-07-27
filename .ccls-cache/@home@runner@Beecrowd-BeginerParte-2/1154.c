#include <stdio.h>

int main(){

float a=0,r=0; 
  int i=0;

  while(a >= 0){
   scanf("%f" , &a);
    if(a >=0)
  {r += a;
    i++;}
   
  }
  r /= i;
  printf("%.2f\n" , r);

  return 0;
}