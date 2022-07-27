# include <stdio.h>

int main(){

int n, x, y, i=0, sum, j;

  scanf("%d" , &n);

  while(i<n){
    sum = 0;
    scanf("%d" "%d"  , &x , &y);
    if(x == y)
      {sum = 0;
      printf("%d\n" , sum);}
    else if(x < y){
      j = x + 1;
      while(j < y){
        if(j % 2 != 0)
          sum += j;
        j++;
      }
      printf("%d\n" , sum);
    }
    else {
      j = y + 1;
      while(j < x){
      
      if(j % 2 != 0)
        sum += j;
      j++;
    }
   printf("%d\n" , sum);
  }
     
    i++;
    }
return 0;
}