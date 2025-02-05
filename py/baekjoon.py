r1, c1, r2, c2 = map(int, input().split())

for i in range(r1, r2 + 1):
    for j in range(5):
        if i == r1 and j == c1:
            print("37", end="")
        elif i == r1 + 1 and j == c1 - 1:
            print("38", end="")
        elif i == r1 + 2 and j == c1 - 2:
            print("39", end="")
        elif i == r1 + 3 and j == c1 - 3:
            print("40", end="")
        elif i == r1 + 4 and j == c1 - 4:
            print("41", end="")
        elif i == r1 + 5 and j == c1 - 5:
            print("42", end="")
        elif i == r1 + 6 and j == c1 - 6:
            print("43", end="")
        else:
            num = i * 49 + j
            if num % 2 == 0:
                print(num // 2, end="")
            else:
                print(((num - 1) // 2) + 1, end="")
    print()