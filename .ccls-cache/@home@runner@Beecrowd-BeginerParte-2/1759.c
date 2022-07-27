#include <stdio.h>

int main(){

int n;
  scanf("%d" , &n);

  for(int i=0;i<n;i++){
    printf("Ho");
    if(i < n-1)
      putchar(' ');
    else
      putchar('!');
  }
  putchar('\n');

  return 0;
}