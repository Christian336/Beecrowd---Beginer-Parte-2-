#include <stdio.h>

int main(){

float m[12][12], sum=0, count=0;
  int i, j, c;
  char O;

 scanf("%c" , &O);
  getchar();
  
  
  for(i=0;i<12;i++){
    for(j=0;j<12;j++)
      scanf("%f" , &m[i][j]);
    }
  getchar();
    
  j =10;
  
  while(j > -1){
    i = 0;
    while(i < 11-j){
      sum += m[i][j];
      i++;
      count++;
    }
    j--;
  }

  switch(O){
    case 'S' : printf("%.1f\n" , sum); break;
    case 'M' : printf("%.1f\n" , sum/count);break;
  }
    
  return 0;
}