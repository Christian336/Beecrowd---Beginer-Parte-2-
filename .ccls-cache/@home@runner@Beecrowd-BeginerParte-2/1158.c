// n = int(input())
// i = 0

// while i < n:
//   s = 0
//   c = 0
//   x = int(input())
//   y = int(input())
//   if x % 2 == 0:
//     x +=1
//   while c < y:
//     s += x
//     x += 2
//     c += 1
//   print(s)
//   i += 1

#include <stdio.h>

int main(){

int n, x, y;
  scanf("%d" , &n);

  for(int i =0; i < n; i++){
    int s=0, c=0;
    scanf("%d %d" , &x, &y);
    if(x % 2 == 0)
      x++;
    while(c < y){
      s += x;
      x+=2;
      c++;
    }
    printf("%d\n" , s);
  }
  

  return 0;
}


