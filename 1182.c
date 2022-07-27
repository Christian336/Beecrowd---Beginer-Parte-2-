#include <stdio.h>

int main(){

float m[12][12], x, sum=0;
  int i, j, c;
  char ch;

 scanf("%d" , &c);
  getchar();
  scanf("%c" , &ch);


  for(i=0;i<12;i++){
    for(j=0;j<12;j++)
      scanf("%f" , &m[i][j]);
    }
  getchar();
    
  i=0;
  
    for(j=c;i<12;i++){
    sum += m[i][j];
  }


  switch(ch){
    case 'S' : printf("%.1f\n" , sum); break;
    case 'M' : printf("%.1f\n" , sum/12);break;
  }
    
  return 0;
}