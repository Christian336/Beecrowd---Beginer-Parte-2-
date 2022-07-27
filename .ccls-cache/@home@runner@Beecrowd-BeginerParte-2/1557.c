#include <stdio.h>
#include <string.h>

int main(){

int n, v=1, x, y;
 

  scanf("%d" , &n);

  while(n != 0){
v= 1;
long long int m[n][n];

    for(int i=0; i<n;i++)
      for(int j=0; j<n;j++){
        if(i == j){
          m[i][j] = v;
          v *= 4;
         for(x=j-1; x>-1;x--) 
           m[i][x] = m[i][x+1] /2;
          for(y=j+1; y<n;y++) 
           m[i][y] = m[i][y-1] *2;
        }
      }

    
    
    
for(int i=0;i<n;i++){
 
  for(int j=0;j<n;j++){

    if(n==1 || n == 2){
      if(j == 0)
         printf("%lld" , m[i][j]);
      else
    printf("%2lld" , m[i][j]);
      }
    if(n==3 || n == 4){
      if(j == 0)
         printf("%2lld" , m[i][j]);
      else
    printf("%3lld" , m[i][j]);
    }
    if(n==5){
      if(j == 0)
         printf("%3lld" , m[i][j]);
      else
    printf("%4lld" , m[i][j]);
    }
    if(n==6|| n==7 ){
      if(j == 0)
         printf("%4lld" , m[i][j]);
      else
    printf("%5lld" , m[i][j]);
    }
    if(n==9  || n == 8){
      if(j == 0)
         printf("%5lld" , m[i][j]);
      else
    printf("%6lld" , m[i][j]);
    }
    if( n == 10){
      if(j == 0)
         printf("%6lld" , m[i][j]);
      else
    printf("%7lld" , m[i][j]);
    }
    if(n==11 || n == 12 ){
      if(j == 0)
         printf("%7lld" , m[i][j]);
      else
    printf("%8lld" , m[i][j]);
    }
    if(n == 14 ||n==13 ){
      if(j == 0)
         printf("%8lld" , m[i][j]);
      else
    printf("%9lld" , m[i][j]);
      }

       if(n==15){
      if(j == 0)
         printf("%9lld" , m[i][j]);
      else
    printf("%10lld" , m[i][j]);
    }
    }
  putchar('\n');
  }
    putchar('\n');
    scanf("%d" , &n);
  }

  return 0;
}