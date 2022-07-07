#include <stdio.h>

int main(void) {

int X, Y;
  float val;

scanf("%d %d" , &X, &Y);

switch(X){
  case 1: val = 4.00; break;
  case 2: val = 4.50; break;
  case 3: val = 5.00; break;
  case 4: val = 2.00; break;
  case 5: val = 1.50; break;
  
}
  
val *= Y;


printf("Total: R$ %.2f\n" , val);
  
  return 0;
}