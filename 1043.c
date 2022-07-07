#include <stdio.h>

int main(){

float A , B , C;
  float x;

  scanf("%f %f %f" , &A , &B , &C);

// Só irá existir um triângulo se, somente se, os seus lados obedeceram à seguinte regra: um de seus lados deve ser maior que o valor absoluto (módulo) da diferença dos outros dois lados e menor que a soma dos outros dois lados.

x = (B - C);

(x < 0)? x *= (-1) : x;

if(A > x && A < (B + C))
  printf("Perimetro = %.1f\n" , (A + B + C));

else
printf("Area = %.1f\n" , ((A + B) * C)/2);  

  return 0;
}