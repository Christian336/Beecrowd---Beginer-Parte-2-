#include <stdio.h>

int main(){

float N1, N2, N3, N4;

scanf("%f %f %f %f" , &N1 , &N2 , &N3 , &N4);

float media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4)/10;

  printf("Media: %.1f\n" , media);

  if (media < 5)
    printf("Aluno reprovado.\n");

  else if (media >= 7)
    printf("Aluno aprovado.\n");

  else{
    printf("Aluno em exame.\n");

  float exame;

  scanf("%f" , &exame);

  printf("Nota do exame: %.1f\n" , exame);

  media = (media + exame)/2;

  if (media < 5)
    printf("Aluno reprovado.\n");

  else 
    printf("Aluno aprovado.\n");

  printf("Media final: %.1f\n" , media);
  
    }








  return 0;
}