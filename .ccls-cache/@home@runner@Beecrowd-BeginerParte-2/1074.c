# include <stdio.h>

int main(){

int n, v[10000], i=0;

scanf("%d" , &n);

while(i < n){
  scanf("%d" , &v[i]);

if(v[i] > 0){
  if(v[i] % 2 == 0)
    printf("EVEN POSITIVE\n");
  else printf("ODD POSITIVE\n");
}
  
else if(v[i] < 0){
  if(v[i] % 2 == 0)
    printf("EVEN NEGATIVE\n");
  else printf("ODD NEGATIVE\n");
}  

else printf("NULL\n");
  
  i++;
}



  return 0;
}