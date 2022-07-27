#include <stdio.h>

int main(){

double m[12][12], sum=0;
  int i, j, x=0,y=11, count=0;
char o;

 o = getchar();

  for(i=0; i<12; i++)
    for(j=0;j<12;j++)
      scanf("%lf" , &m[i][j]);

  for(i=0; i < 12; i++){
    for(j=0; j<12; j++){
    if(j > x && j < y){
      sum += m[i][j];
      count++;
      }
      }
    x++;
    y--;
  }

  switch(o){
    case 'S' : printf("%.1f\n" , sum);break;
    case 'M' : printf("%.1f\n" , sum/count);
  }

  return 0;
}