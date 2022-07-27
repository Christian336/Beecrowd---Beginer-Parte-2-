n = int(input())
i = 0

while i < n:
  s = 0
  i+=1
  x = int(input())
  for j in range(0,x):
    if j>0 and x % j == 0:
      s += j 
  if x == s:
    print(x , 'eh perfeito')
  else: print(x, 'nao eh perfeito')
  

  

