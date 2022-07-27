#include <stdio.h>

int main(){

int v[100], i=0, x, y;

while(i < 100){
  scanf("%d" , &v[i]);
  i++;
}

x = v[0];
  y = 0;
for(i=0; i<100;i++){
if(v[i] > x){
  x = v[i];
  y = i;
}  
}
 y++;

  printf("%d\n%d\n" , x , y);
  
  return 0;
}