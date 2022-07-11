#include <stdio.h>

int main(){

int v[5] , i, count = 0;

  scanf("%d\n%d\n%d\n%d\n%d" , &v[0],&v[1],&v[2],&v[3],&v[4]);

for(i=0; i<5; i++){
  if(v[i] % 2 == 0)
    count++;  
}

  printf("%d valores pares\n" , count);


  return 0;
}