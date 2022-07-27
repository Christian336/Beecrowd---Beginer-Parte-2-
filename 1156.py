i=1
j=1
s = 0

while i <= 39:
  s += i/j
  i += 2
  j *= 2

print((f'{s : ,.2f}').strip())

