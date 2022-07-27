#include <stdio.h>

int main(){

int n;

  while(scanf("%d" , &n) != EOF){
  

    int arr[n][n], x=0, y=n-1;

    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(j == x)
          arr[i][j] = 1;
        if(j == y)
          arr[i][j] = 2;
        if(j != x && j != y)
          arr[i][j] = 3;
      }
      x++;
      y--;
    }

    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++){
        printf("%d" , arr[i][j]);
        if(j == n-1)
          putchar('\n');
      }
        
  }

  return 0;
}

