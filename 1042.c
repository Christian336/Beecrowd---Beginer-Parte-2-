#include <stdio.h>

int main(){

int x, y, z;
 

  scanf("%d %d %d" , &x , &y , &z);

if(x < y && x < z && y < z)
  printf("%d\n%d\n%d\n\n" , x , y , z);

else if(x < y && x < z && z < y)
  printf("%d\n%d\n%d\n\n" , x , z , y);

else if(y < x && y < z && x < z)
  printf("%d\n%d\n%d\n\n" , y , x , z);  

else if(y < x && y < z && z < x)
  printf("%d\n%d\n%d\n\n" , y , z , x); 

else if(z < x && z < y && x < y)
  printf("%d\n%d\n%d\n\n" , z , x , y);

else if(z < x && z < y && y < x)
  printf("%d\n%d\n%d\n\n" , z , y , x);

printf("%d\n%d\n%d\n" , x , y , z);  

return 0;
}