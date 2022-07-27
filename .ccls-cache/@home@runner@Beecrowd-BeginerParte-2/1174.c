#include <stdio.h>

int main(){

float a; 
  int i=0;

  while(i < 100){
    scanf("%f" , &a);
    if(a <= 10)
      printf("A[%d] = %.1f\n" , i , a);
    i++;
  }

  return 0;
}