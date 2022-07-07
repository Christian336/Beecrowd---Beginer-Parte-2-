#include <stdio.h>

int main(){

int A , B;
int x , y;

  scanf("%d %d" , &A , &B);

if(A >= B){
  x = A;
  y = B;
}

else{
  x = B;
  y = A;
}
  
if(x%y == 0)
  printf("Sao Multiplos\n");

  else
  printf("Nao sao Multiplos\n");
  



  return 0;
}