import math
k = int(input())
 
a = []
for i in range(0, k):
    num1, num2 = [int(x) for x in input().split()]
    a.append([num1, num2])
 
for i in a:
    divider, quantity = i
    result = math.ceil(quantity / (divider - 1)) + quantity - 1
    print(result)