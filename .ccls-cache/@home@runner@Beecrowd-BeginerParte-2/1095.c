# include <stdio.h>

int main(){

int i=1, j=60;
printf("I=%d J=%d\n" , i , j);
  
 do{
    
    i += 3;
    j -= 5;
   printf("I=%d J=%d\n" , i , j);
  } while(j != 0);

return 0;
}