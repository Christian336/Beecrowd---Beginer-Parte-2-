# include <stdio.h>

int main(){

int N , i;
  scanf("%d" , &N);

 for(i = 2; i < N+1; i += 2)
   printf("%d^2 = %d\n" , i , i*i);


  return 0;
}