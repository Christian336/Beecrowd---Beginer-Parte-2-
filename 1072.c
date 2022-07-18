#include <stdio.h>

int main(){

int n, v[100000], i=0, in = 0, out = 0;

 scanf("%d" , &n);

 while(i < n){
   scanf("%d" , &v[i]);
   i++;
   }

for(i = 0; i < n; i++){
  if(v[i] >= 10 && v[i] <= 20)
    in++;
  else out++;
}

  printf("%d in\n%d out\n" , in , out);


  return 0;
}