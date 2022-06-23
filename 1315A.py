n = int(input())
for i in range(n):
    a,b,x,y = map(int,input().split())
    x+=1
    y+=1
    print(max(abs(x-a)*b, (x-1)*b, a*(y-1), abs(y-b)*a))