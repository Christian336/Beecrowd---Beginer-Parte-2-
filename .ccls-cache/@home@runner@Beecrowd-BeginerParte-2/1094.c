# include <stdio.h>

int main(){

int n, i=0, e, c=0,s=0,r=0, t;
  char l;
  float pc, ps, pr;
 scanf("%d" , &n);

  while(i < n){
    scanf("%d %c" , &e , &l);
    if(l =='C')
      c += e;
    else if(l == 'S')
      s += e;
    else if(l == 'R')
      r += e;
    
    i++;
  }

t = c + s + r;
pc = c*100.0/t;
  ps = s*100.0/t;
  pr = r*100.0/t;

printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n" , t,c,r,s,pc,pr,ps);
  
return 0;
}


// Em Python:

// n = int(input())

// C = R = S =0
// for i in range(n):
//     x = input()
//     if x[-1] == 'C':
//         C += int(x[:-2])
//     elif x[-1] == 'R':
//         R += int(x[:-2])
//     elif x[-1] == 'S':
//         S += int(x[:-2])
// t = C + R + S
// pc = str(float(C*100/t))
// pr = str(float(R*100/t))
// ps = str(float(S*100/t))

// if float(pc) < 10:
//     pc = float(pc[:4])
// else: pc = float(pc[:5])
    
// if float(ps) < 10:
//     ps = float(ps[:4])
// else: ps = float(ps[:5])
    
// if float(pr) < 10:
//     pr = float(pr[:4])
// else: pr = float(pr[:5])

// print("Total:" ,t ,"cobaias")
// print("Total de coelhos:" , C)
// print("Total de ratos:" , R)
// print("Total de sapos:" , S)
// print("Percentual de coelhos:" , pc ,'%')
// print("Percentual de ratos:" , pr , '%')
// print("Percentual de sapos:" , ps , "%")