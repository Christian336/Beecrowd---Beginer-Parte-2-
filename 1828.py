t = int(input())

for i in range(0,t):
  x,y = input().split(' ')
 
  if (x == 'tesoura' and y == 'papel') or (x == 'papel' and y == 'pedra') or (x == 'pedra' and y == 'lagarto') or (x == 'lagarto' and y == 'Spock') or (x == "Spock" and y == 'tesoura') or (x == 'tesoura' and y == 'lagarto') or (x == 'lagarto' and y == 'papel') or (x == 'papel' and y== 'Spock') or (x== 'Spock' and y == 'pedra') or (x == 'pedra' and y== 'tesoura'):
    print('Caso #%i: Bazinga!' %(i+1))

  elif (y == 'tesoura' and x == 'papel') or (y == 'papel' and x == 'pedra') or (y == 'pedra' and x == 'lagarto') or (y == 'lagarto' and x == 'Spock') or (y == "Spock" and x == 'tesoura') or (y == 'tesoura' and x == 'lagarto') or (y == 'lagarto' and x == 'papel') or (y == 'papel' and x== 'Spock') or (y== 'Spock' and x == 'pedra') or (y == 'pedra' and x== 'tesoura'):
    print('Caso #%i: Raj trapaceou!' %(i+1))
  else:
    print('Caso #%i: De novo!' %(i+1))





