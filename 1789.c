#include <stdio.h>

int main(){

int l, v[500], x=0,y=0;

  while(scanf("%d" , &l) != EOF){
    for(int i=0; i < l;i++){
      scanf("%d" , &v[i]);
    if(v[i] >= 10)
      x=1;
      if(v[i] >= 20)
        y=1;
      
      }
    if(x==0 && y==0)
      printf("1\n");

    if(x==1 && y==0)
      printf("2\n");

    if(y==1)
      printf("3\n");

  x=0;
    y=0;
  }

  return 0;
}