#include <stdio.h>

int main(){

int n, x;

  scanf("%d" , &n);

  for(int i =0; i < n; i++){
    int sum = 0;
    scanf("%d" , &x);
    for(int j=1; j < x+1; j++){
      if(x % j == 0)
        sum += 1;
    }
    if(sum == 2)
      printf("%d eh primo\n" , x);
    else printf("%d nao eh primo\n" , x);
  }

  return 0;
}