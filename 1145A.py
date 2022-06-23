N = int(input())
A = list(map(int, input().split()))
 
def larg(A):
    if A == sorted(A):
        return len(A)
    
    return max(larg(A[:len(A) // 2]), larg(A[len(A) // 2:]))
 
print(larg(A))