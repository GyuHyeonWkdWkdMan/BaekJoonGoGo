A,B=input().split(' ')
C=int(input())

trash = int((int(B)+C)/60)          #몫 -> 시에 더해줘야 하는 분
new_B = str((int(B)+C)%60)               #나머지 -> 남는 분


new_A = str((int(A)+trash)%24)


print(new_A + ' ' + new_B)
