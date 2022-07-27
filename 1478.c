#include <stdio.h>

int main(){

int n, i, j, v=1;

  scanf("%d" , &n);

  while(n != 0){
    int arr[n][n];
    for(i=0;i<n; i++){
      for(j=0;j<n;j++){
        if(i == j){
         
          int x=i, y=j;
          v=1;
          for(x=i;x > -1;x--){
            arr[x][y] = v;
            v++;
        }
          v=1;
          for(x=i;x < n;x++){
            arr[x][y] = v;
            v++;
        }
        }
      }
  }
     
  for(i=0;i<n;i++)
    for(j=0;j<n;j++){
      if(j == 0)
        printf("%3d", arr[i][j]);
      else printf(" %3d", arr[i][j]);
      if(j == n -1)
        putchar('\n');
    }


     putchar('\n');
    scanf("%d" , &n);
    }
 
      

  return 0;
}