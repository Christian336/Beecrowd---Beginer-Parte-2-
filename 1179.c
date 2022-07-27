#include <stdio.h>

int main(){

int x, p[5], I[5], j=0, k=0,s1,s2;

  for(int i=0;i<15;i++){
    
    if(j == 5){
      for(int j=0;j<5;j++){
        printf("par[%d] = %d\n", j , p[j]);
        }
        j=0;
      
    }

    if(k == 5){
      for(int k=0;k<5;k++){
        printf("impar[%d] = %d\n", k , I[k]);
        }
        k=0;
      
    }
    
    scanf("%d" , &x);
    if(x % 2 == 0){
      p[j] = x;
      j++;
    }
    else{
      I[k] = x;
      k++;
    }
  }
s1 = j;
  s2 = k;
  
  
      for(int k=0;k<s2;k++){
        printf("impar[%d] = %d\n", k , I[k]);
        }

        for(int j=0;j<s1;j++){
        printf("par[%d] = %d\n", j , p[j]);
          }

  return 0;
}