#include <stdio.h>

int main(){

int x, i=1;

  while(1){
    scanf("%d" , &x);
    if(x == 0)
      break;
    while(i < x+1){
      printf("%d" , i);
      if(i<x)
        putchar(' ');
      i++;
    }
    putchar('\n');
    i= 1;
  }

  return 0;
  }