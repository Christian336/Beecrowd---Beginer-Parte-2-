#include <stdio.h>

int main(){

int t , a=0, pa, pb; 
  int x, y;
  double g1, g2;

  scanf("%d" , &t);

  for(int i = 0; i < t; i++){
    
    scanf("%d %d %lf %lf" , &pa , &pb , &g1, &g2);
    
    
  
    while(pa <= pb){
      x = (int)(pa*g1/100);
    y = (int)(pb*g2/100);
      a++;
      pa += (int)x;
      pb += (int)y;
       
    }
    if(a > 100)
      printf("Mais de 1 seculo.\n");
    else printf("%d anos.\n" , a);
    a = 0;
  }

  return 0;
}