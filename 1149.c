# include <stdio.h>

int main(){

int a, n, i , r=0;

  scanf("%d" , &a);
  while(n <= 0){
    scanf("%d" , &n);
  }

 for(i=0; i < n; i++)
   r+= i+a;
 
  printf("%d\n" , r);

  return 0;
}