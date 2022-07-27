#include <stdio.h>

int main(){

int x, y, i=1, z;

  scanf("%d %d" , &x , &y);
  z = x;

  while(i < y+1){

    while(i < x + 1){
    printf("%d " , i);
    i++;
}
   
    x += z;
    putchar('\n');
    }
  
 
    return 0;
}

// x,y = map(int,input().split())
// aux = 1
// for i in range(1,y+1):
//     if (aux==x):
//         print(i)
//         aux=1
//     else:
//         print(i,end=" ")
//         aux+=1