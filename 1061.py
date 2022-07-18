d1 = input()
t1 = input()
d2 = input()
t2 = input()

d1 = d1[4:]
d1 = int(d1)
d2 = d2[4:]
d2 = int(d2)

h1 = int(t1[:2])
m1 = int(t1[5:7])
s1 = int(t1[10:])

h2 = int(t2[:2])
m2 = int(t2[5:7])
s2 = int(t2[10:])


x1 = s1 + m1*60 + h1*3600 + d1*3600*24
x2 = s2 + m2*60 + h2*3600 + d2*3600*24

x = x2 - x1

d = x//(3600*24)
x -= d*(3600*24)

h = x//3600
x -= h*3600

m = x//60
x -= m*60

s = x

print(d, 'dia(s)')
print(h, 'hora(s)')
print(m, 'minuto(s)')
print(s, 'segundo(s)')

