#include <stdio.h>

int main(){

int w1,w2,w,x1,x2,x,y1,y2,y,z1,z2,z;
char a[3];
  char b;
  
  scanf("%s %d\n%d %c %d %c %d\n%s %d\n%d %c %d %c %d" , a , &w1 , &y1 , &b , &y1 , &b , &z1 , a , &w2 , &y2 , &b , &y2 , &b , &z2);

  //|Dia
  if(w1==w2)
     w=0;

  else if(w1<w2)
    w=w2-w1;

  //Hora
  if(x1==x2)
    x=0;

  else if(x1<x2)
    x=x2-x1;

  else if(x1>x2){
    x=24-x2+x1;
    w-=1;
  }

  //Minuto
  if(y1==y2)
    y=0;

  else if(y1<y2)
    y=y2-y1;

  else if(y1>y2){
    y=60-y2+y1;
    x-=1;
  }

  //Segundo
    if(z1==z2)
    z=0;

  else if(z1<z2)
    z=z2-z1;

  else if(z1>z2){
    z=60-z2+z1;
    y-=1;
  }

printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n" , w , x , y , z);
  
  return 0;
}