# include <stdio.h>

int main(){

int n, i=0, j=1, count;

  scanf("%d" , &n);

 for(count=0;count<n;count++){
   printf("%d" , i);
   if(count < n-1)
     putchar(' ');
   count++;
   if(count >= n)
     break;
   j += i;
   printf("%d" , j);
   if(count < n-1)
     putchar(' ');
   i += j;
 } 
  putchar('\n');
  
return 0;
}