#include <stdio.h>

int main(){

int w1,w2,w,x1,x2,x,y1,y2,y,z1,z2,z;
char a[3];
  char b;
  
  scanf("%s %d" , a , &w1);

  scanf("%d %c %d %c %d",  &x1 , &b , &y1 , &b , &z1);

  scanf("%s %d" , a , &w2);

  scanf("%d %c %d %c %d", &x2 , &b , &y2 , &b , &z2);

  //|Dia
  if(w1==w2)
     w=0;

  else if(w1<w2)
    w=w2-w1;

  //Hora
  if(x1==x2)
    x=0;

  else if(x1<x2)
    x = x2-x1;

  else if(x1>x2){
    x = (24-x1) + x2;
    w-=1;
  }

  //Minuto
  if(y1==y2)
    y=0;

  else if(y1<y2)
    y=y2-y1;

  else if(y1>y2){
    y=60-y1+y2;
    x-=1;
  }

  //Segundo
    if(z1==z2)
    z=0;

  else if(z1<z2)
    z=z2-z1;

  else if(z1>z2){
    z=60-z1+z2;
    y-=1;
  }

printf("%d dia(s)\n" , w);

  printf("%d hora(s)\n" , x);

  printf("%d minuto(s)\n" , y);

  printf("%d segundo(s)\n" , z);
  
  
  return 0;
}

//Esta dando erra porém todos os resultados testados estão batendo