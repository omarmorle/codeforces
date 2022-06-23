num = int(input())
aux = ''
nombres = []
for i in range(num):
    aux = input()
    if aux in nombres:
        print ("YES")
    else:
        print("NO")
    nombres.append(aux)