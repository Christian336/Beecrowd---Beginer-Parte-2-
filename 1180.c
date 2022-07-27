#include <stdio.h>

int main(){

int n, x[1000], i=0, m, s;

  scanf("%d" , &n);

while(i < n){
  scanf("%d" , &x[i]);
  i++;
}  

  m=x[0];
  s=0;
  for(i=0; i<n; i++){
    if(x[i] < m){
      m = x[i];
      s = i;
        }
  }

printf("Menor valor: %d\nPosicao: %d\n" , m , s);
  
  return 0;
}