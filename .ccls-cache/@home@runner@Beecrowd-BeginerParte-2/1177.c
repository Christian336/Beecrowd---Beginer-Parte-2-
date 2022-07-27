#include <stdio.h>

int main(){

int t, n[1000], x=0;

  scanf("%d" , &t);

  for(int i=0; i<1000;i++){
    if(x == t)
      x = 0;
    
    n[i] = x;
    x++;
    printf("N[%d] = %d\n" ,i, n[i]);
  }

  return 0;
}