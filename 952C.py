n=int(input())
numeros=list(map(int,input().split()))
mx=0
flag=True
if n>1:
    if numeros[0]-numeros[1]>1:
        flag=False
    elif numeros[n-1]-numeros[n-2]>1:
        flag=False
    else:
        for i in range(1,n-1):
            if (numeros[i]-numeros[i-1]>1):
                flag=False
                break
            if (numeros[i]-numeros[i+1]>1):
                flag=False
                break
if flag:
    print("YES")
else:
    print("NO")