cnt = int(input())
data = []

for i in range(cnt):
    data.append(input())

if cnt == 1:
    print(data[0])


result = data[0]

for i in range(len(data[0])):
    for j in range(0, cnt):
        if result[i] != data[j][i]:
            result[i] = "?"




print(''.join(result))

