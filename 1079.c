#include <stdio.h>

int main(){

int n , i=0;
  float a, b, c;
  scanf("%d" , &n);

while(i < n){
  scanf("%f %f %f" , &a , &b, &c);
  printf("%.1f\n" , (a*2 + b*3 + c*5)/10);
  i++;
}

  return 0;
}