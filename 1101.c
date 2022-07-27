#include <stdio.h>

int main(){

int m, n, sum;

do{
  sum = 0;
 scanf("%d %d" , &m , &n); 
  if(m <= 0 || n <= 0)
    break;
 if(m == n)
   printf("%d Sum=%d\n" , m , m);
 else if(m > n){
   while(n < m+1){
     printf("%d " , n);
     sum += n;
     n++;
   }
    printf("Sum=%d\n" , sum);
 }  
 else{
    while(m < n+1){
     printf("%d " , m);
     sum += m;
     m++;
   }
    printf("Sum=%d\n" , sum);
 }  
 }while(1);

return 0;
}