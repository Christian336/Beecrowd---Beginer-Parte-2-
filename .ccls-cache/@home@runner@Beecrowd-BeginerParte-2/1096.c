#include <stdio.h>

int main(){

int i=1,j=7;
 

  while(i < 10){
 if(j == 7){
   printf("I=%d J=%d\n" , i, j);
   j--;
   
   continue;
 }
  else if(j == 6){
    printf("I=%d J=%d\n" , i, j);
    j--;
    
    continue;
  }
  else{
    printf("I=%d J=%d\n" , i, j);
    j = 7;
    i += 2;
    
  }
  }

  return 0;
}