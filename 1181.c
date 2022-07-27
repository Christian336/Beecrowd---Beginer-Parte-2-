#include <stdio.h>

int main(){

float m[12][12], x, sum=0;
  int i, j, l;
  char c;

 scanf("%d" , &l);
  getchar();
  scanf("%c" , &c);


  for(i=0;i<12;i++){
    for(j=0;j<12;j++)
      scanf("%f" , &m[i][j]);
    }
  getchar();
    
  j=0;
  
    for(i=l;j<12;j++){
    sum += m[i][j];
  }


  switch(c){
    case 'S' : printf("%.1f\n" , sum); break;
    case 'M' : printf("%.1f\n" , sum/12);break;
  }
    
  return 0;
}