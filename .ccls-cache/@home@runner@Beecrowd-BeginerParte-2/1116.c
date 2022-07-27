#include <stdio.h>

int main(){

  int n,x,y,i=0;
  float d;
  scanf("%d" , &n);

  while(i < n){
    scanf("%d %d" , &x , &y);
    d = (float)x/y;
    if(y == 0)
      printf("divisao impossivel\n");
    else
      printf("%.1f\n" , d);
    i++;
  }

  return 0;
}