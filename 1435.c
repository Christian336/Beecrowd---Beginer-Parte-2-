#include <stdio.h>

int main(){

int n,i,j,v,e,c;

  scanf("%d"  , &n);

  

  while(n != 0){
    int x=0, y=n;
    int arr[n][n];
    c = 0;
    if(n % 2 != 0)
      e = (n+1)/2;
    else
    e = n/2;
    v = 1;
    

    while(c < e)
    {
      j=x;
      i = x;
      while(j < y){
      
      arr[i][j] = v;
      j++;
    }
    j=x;
       i = y-1;
    while(j < y){
     
      arr[i][j] = v;
      j++;
    }
    i = x;
      j = x;
     while(i < y){
      
      arr[i][j] = v;
      i++;
    }
    i = x;
      j = y-1;
     while(i < y){
      
      arr[i][j] = v;
      i++;
    }
    x++;
    y--;
    v++;
      c++;
      }
    for(i=0;i<n;i++){
      
      for(j=0;j<n;j++){
        if(j == 0) printf("%3d" , arr[i][j]);
       else printf(" %3d" , arr[i][j]);
        }
     putchar('\n');
      }
     putchar('\n');
    scanf("%d" , &n);
    }
    
    

  return 0;
}
