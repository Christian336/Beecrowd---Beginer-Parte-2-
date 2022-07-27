#include <stdio.h>
#include <math.h>

int main(){

int n;
float i=1;

  scanf("%d" , &n);
 

 while(i < n+1){
  printf("%.f %.f %.f\n" , i , pow(i,2) , pow(i,3));
    printf("%.f %.f %.f\n" , i , pow(i,2) + 1, pow(i,3) + 1);
   i++;
 } 

  return 0;
}