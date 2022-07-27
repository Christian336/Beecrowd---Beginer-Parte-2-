#include <stdio.h>

int main(){

int x , y;

  while(1){
    scanf("%d %d" , &x, &y);
    if(x == 0  || y == 0)
      break;
    else if(x > 0 && y > 0)
      printf("primeiro\n");
    else if(x < 0 && y > 0)
      printf("segundo\n");
    else if(x < 0 && y < 0)
      printf("terceiro\n");
    else if(x > 0 && y < 0)
      printf("quarto\n");
  }
  
  return 0;
}

// while 1:
//   x = int(input())
//   y = int(input())
//   if x == 0 or y == 0:
//     break
//   elif x > 0 and y > 0:
//     print("primeiro")
//   elif x < 0 and y > 0:
//     print("segundo")
//   elif x < 0 and y < 0:
//     print("terceiro")
//   elif x > 0 and y < 0:
//     print("quarto")
  
