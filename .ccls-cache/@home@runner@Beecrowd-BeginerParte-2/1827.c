#include <stdio.h>

int main(){

int n, v[101][101], x, y, z,p;

  while(scanf("%d" , &n) != EOF){
    z = n/3;
    p = n/2;
    x= 0;
    y = n-1;

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        v[i][j] = 0;
        if(j >= z && i >= z && j <= n-z-1 && i <= n-z-1)
          v[i][j] = 1;
          else if(j == x)
            v[i][j] = 2;
            else if(j == y)
              v[i][j] = 3;
        if(x == y && i == j)
          v[i][j] = 4;
        printf("%d" , v[i][j]);
        if(j == n-1)
          putchar('\n');
      }
    x++;
      y--;
      }
    putchar('\n');
   
  }
  

  return 0;
}