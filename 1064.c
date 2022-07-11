#include <stdio.h>

int main(){

float v[6];
  int i, count = 0;
 float sum = 0;

scanf("%f\n%f\n%f\n%f\n%f\n%f" ,&v[0],&v[1],&v[2],&v[3],&v[4],&v[5]);

for(i=0;i<6;i++){
  if (v[i] > 0){
    count++;
    sum += v[i];
    }
}

if(count > 0){
  printf("%d valores positivos\n" , count);
  printf("%.1f\n" , sum/count);
}

return 0;
}