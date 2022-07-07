#include <stdio.h>
#include <string.h>

int main(){

char x[100] , y[100] , z[100];

  scanf("%s\n%s\n%s" , x , y , z);

if(strcmp(x, "vertebrado") == 0){

if(strcmp(y, "ave") == 0){
  if(strcmp(z, "carnivoro") == 0)
    printf("aguia\n");
  if(strcmp(z, "onivoro") == 0)
    printf("pomba\n");
}
  if(strcmp(y, "mamifero") == 0){
    if(strcmp(z, "onivoro") == 0)
      printf("homem\n");
    if(strcmp(z, "herbivoro") == 0)
      printf("vaca\n");
    
  }
    
}

  if(strcmp(x , "invertebrado") == 0){
    if(strcmp(y , "inseto") == 0){
      if(strcmp(z , "hematofago") == 0)
        printf("pulga\n");
      if(strcmp(z , "herbivaro") == 0) 
        printf("lagarta\n");
    }

    if(strcmp(y , "anelideo") == 0){
      if(strcmp(z , "hematofago") == 0)
        printf("sanguessuga\n");
      if(strcmp(z , "onivoro") == 0)
        printf("minhoca\n");
    }
  }




  return 0;
}