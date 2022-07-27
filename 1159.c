#include <stdio.h>

int main(){

int x;

scanf("%d" , &x);
while(1){
  int sum = 0;
  if(x == 0)
    break;
  if(x % 2 != 0)
    x++;
  for(int i = 0; i<5; i++)
   { sum += x;
     x += 2;
     }

  printf("%d\n" , sum);
  scanf("%d" , &x);
}

  return 0;
}