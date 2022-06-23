n = int(input())
a = (n // 10) * 10
b = n % 10
if n in (10, 11, 13, 14, 15, 16, 17, 18, 19,):
    print("NO")
elif b in (1, 7, 9):
    print("NO")
elif a in (20, 70, 90):
    print("NO")
else:
    print("YES")