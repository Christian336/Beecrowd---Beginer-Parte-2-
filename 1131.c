# include <stdio.h>

int main(){

int g, i, gg = 0, ig = 0, e=0, n;

  while(1){
    scanf("%d %d" , &i , &g);
    if(i == g)
      e++;
    else if(i > g)
      ig++;
    else gg++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d" , &n);
    if(n == 2){
      printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n" , (gg + ig + e) , ig , gg , e);
      if(gg == ig)
        {printf("Não houve vencedor\n");
        break;}
      else if(ig > gg)
        {printf("Inter venceu mais\n");
          break;}
      else{ printf("Gremio venceu mais\n");
        break;}
    }
  }

  return 0;
}