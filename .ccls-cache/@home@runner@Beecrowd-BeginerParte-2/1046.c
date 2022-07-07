#include <stdio.h>

int main(){

int x , y , h;

  scanf("%d %d" , &x , &y);

if(y > x)
  h = y - x;

  else{
    int i , j = 0;
for(i = x; i != 24; i++ )
j++;
    
for(i = 0; i < y; i++)
  j++;

h = j;
    }

  printf("O JOGO DUROU %d HORA(S)\n" , h);
    
  return 0;
}