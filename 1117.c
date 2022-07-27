# include <stdio.h>

int main(){

float x , y;

  while(1){
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
  
  return 0;
}