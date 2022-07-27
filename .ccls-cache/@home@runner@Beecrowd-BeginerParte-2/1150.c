#include <stdio.h>

int main(){

int x, z, sum=0, count;

  scanf("%d %d" , &x , &z);

  while(z <= x){
    scanf("%d" , &z);
  }

  for(count=0; sum < z; count++){
   sum += x;
    x++;
  }

printf("%d\n" , count);
  
  return 0;
}