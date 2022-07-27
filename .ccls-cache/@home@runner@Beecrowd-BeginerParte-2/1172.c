#include <stdio.h>

int main(){

int x,i;

  for(i=0;i<10;i++){
    scanf("%d" , &x);
    if(x > 0)
      printf("X[%d] = %d\n" , i, x);
    else printf("X[%d] = %d\n" , i, 1);
  }

  return 0;
}