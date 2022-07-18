#include <stdio.h>

int main(){

int x, y, sum = 0, i;

scanf("%d\n%d" , &x , &y);

  if(x == y)
    printf("%d\n" , 0);

  else if(x > y){
    for (i = y + 1; i < x; i++){
      if(i % 2 != 0)
        sum += i;
    }
    printf("%d\n" , sum);
  }

    else if(x < y){
    for (i = x + 1; i < y; i++){
      if(i % 2 != 0)
        sum += i;
    }
    printf("%d\n" , sum);
  }


  return 0;
}