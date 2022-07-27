# include <stdio.h>

int main(){

  int n;
float x , y;

  while(3)
  {while(1){
    scanf("%f" , &x);
    if(x < 0 || x > 10){
      printf("nota invalida\n");
      continue;
      }
    else
      break;
  }

  while(2){
    scanf("%f" , &y);
    if(y < 0 || y > 10){
      printf("nota invalida\n");
      continue;
      }
    else
      break;
  }

printf("media = %.2f\n" , (x+y)/2);

    while(4){
    printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d" , &n);
      if(n == 1 || n == 2)
        break;
      }
  if(n == 2)
    break;
  }
  return 0;
}