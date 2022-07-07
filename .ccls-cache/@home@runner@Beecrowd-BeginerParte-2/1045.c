#include <stdio.h>


int main(){

double A , B , C , S;

  scanf("%lf %lf %lf" , &A , &B , &C);

  if(A < B){
 S = A;
    A = B;
    B = S;
  }

    if(A < C){
 S = A;
    A = C;
    C = S;
  }

if(A >= (B + C))
printf("NAO FORMA TRIANGULO\n");

  else{

if((A * A) == ((B * B) + (C * C)))
  printf("TRIANGULO RETANGULO\n");

if((A * A) > ((B * B) + (C * C)))
  printf("TRIANGULO OBTUSANGULO\n"); 

if((A * A) < ((B * B) + (C * C)))
  printf("TRIANGULO ACUTANGULO\n");    
if(A == B && B == C)
printf("TRIANGULO EQUILATERO\n");

if(((A == B) && (A != C)) || ((B == C) && (C != A))|| ((C == A) && (A != B)))
printf("TRIANGULO ISOSCELES\n");
  
  }



return 0;
}