A, B, C = map(int, input().split())

def three(dice):
    return 10000 + dice * 1000

def two(dice):
    return 1000 + dice * 100

def none(dice):
    return dice * 100

if(A == B and B == C):
    print(three(A))

elif(A == B or A == C):
    print(two(A))
    
elif(B == C):
    print(two(B))
    
else:
    print(none( max( A, B, C ) ))
