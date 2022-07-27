#include <stdio.h>

int main(){

int i=19, n[20], x;

  while(i > -1){
    scanf("%d" , &x);
    n[i] = x;
    i--;
  }

  for(i = 0; i < 20; i++){
    printf("N[%d] = %d\n" , i , n[i]);
  }

  return 0;
}