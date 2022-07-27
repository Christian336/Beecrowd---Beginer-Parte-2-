 #include <stdio.h>

// int fib(int x){
// if(x == 0)
//   return 0;
// if(x == 1)
//   return 1;
// if(x > 1)
//   return fib(x-1) + fib(x -2);
// }



// int main(){

// unsigned int n, x, a[x];

// scanf("%d" , &n);



// for(int i=0; i<n; i++){
//   scanf("%d" , &x);
//     for(int j=0;j<x+1;j++){
//     a[j] = fib(j);
//   }
//   printf("Fib(%d) = %d\n" , x , a[x]);
// }
    
  

//   return 0;
// }

int main(){

int n, x; 
  long long int a[60];
a[0] = 0;
  a[1] = 1;
scanf("%d" , &n);

for(int i=0; i<n; i++){
  scanf("%d" , &x);
    for(int j=2;j<x+1;j++){
    a[j] = *(a + j -1) + *(a + j -2);
  }
  printf("Fib(%d) = %lld\n" , x , a[x]);
}

  return 0;
}