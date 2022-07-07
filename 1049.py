# x = input()
# y = input()
# z = input()

# if x == "vertebrado" and y == "ave" and z == "carnivoro":
#   print("aguia\n")

# elif x == "vertebrado" and y == "ave" and z == "onivoro":
#   print("pomba\n")

# elif x == "vertebrado" and y == "mamifero" and z == "onivoro":
#   print("homem\n")

# elif x == "vertebrado" and y == "mamifero" and z == "herbivoro":
#   print("vaca\n")

# elif x == "invertebrado" and y == "inseto" and z == "hematofago":
#   print("pulga\n")

# elif x == "invertebrado" and y == "inseto" and z == "herbivoro":
#   print("lagarta\n")

# elif x == "invertebrado" and y == "anelideo" and z == "hematofago":
#   print("sanguessuga\n")

# elif x == "invertebrado" and y == "anelideo" and z == "onivoro":
#   print("minhoca\n")

x = input()
y = input()
z = input()

if(x == "vertebrado"):
    if(y == "ave"):
        if(z == "carnivoro"):
            print("aguia\n")
        elif(z == "onivoro"):
            print("pomba\n")
    elif(y == "mamifero"):
        if(z == "onivoro"):
            print("homem\n")
        elif(z == "herbivoro"):
            print("vaca\n")
elif(x == "invertebrado"):
    if(y == "inseto"):
        if(z == "hematofago"):
            print("pulga\n")
        elif(z == "herbivoro"):
            print("lagarta\n")
    elif(y == "anelideo"):
        if(z == "hematofago"):
            print("sanguessuga\n")
        elif(z == "onivoro"):
            print("minhoca\n")
        
            
        