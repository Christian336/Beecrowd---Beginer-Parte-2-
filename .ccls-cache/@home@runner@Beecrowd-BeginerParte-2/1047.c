#include <stdio.h>

int main(){

int h1, m1, h2, m2, h, m;

  scanf("%d %d %d %d" , &h1 , &m1 , &h2 , &m2);

  if(h1 > h2){
    h = (24 - h1) + h2;
    if(m1 == m2)
      m = 0;
    else if(m1 > m2){
      h -= 1;
      m = (60 - m1) + m2;
    }
    else if(m1 < m2){
      m = m2 - m1;
    }
  }

  if(h1 == h2){
    h = 24;
    if(m1 == m2){
      m = 0;
    }
    else if(m1 > m2){
      h -= 1;
      m = (60 - m1) + m2;
    }
    else if(m1 < m2){
      h -= h;
      m = m2 - m1;
    }
  }

  if(h1 < h2){
    h = h2 - h1;
    if(m1 == m2)
      m = 0;
    else if(m1 > m2){
      h -= 1;
      m = (60 - m1) + m2;
    }
    else if(m1 < m2){
      m = m2 - m1;
    }
  }

printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" , h, m);
    
  return 0;
}
  