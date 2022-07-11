#include <stdio.h>

int main(){

int v[5] , i, par = 0, impar = 0, pstv = 0, ngtv = 0;

scanf("%d\n%d\n%d\n%d\n%d" , &v[0], &v[1], &v[2], &v[3] , &v[4]);

  for(i = 0; i < 5; i++){
    if(v[i] % 2 == 0)
      par++;
    else impar++;
    if(v[i] > 0)
      pstv++;
    else if(v[i] < 0)
      ngtv++;
  }

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n" , par , impar, pstv, ngtv);

  return 0;
}