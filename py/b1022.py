"""

문제
크기가 무한인 정사각형 모눈종이가 있다. 모눈종이의 각 정사각형은 행과 열의 쌍으로 표현할 수 있다.

이 모눈종이 전체를 양의 정수의 소용돌이 모양으로 채울 것이다. 일단 숫자 1을 0행 0열에 쓴다. 그리고 나서 0행 1열에 숫자 2를 쓴다. 거기서 부터 소용돌이는 반시계 방향으로 시작된다. 다음 숫자는 다음과 같이 채우면 된다.

    -3 -2 -1  0  1  2  3
    --------------------
-3 |37 36 35 34 33 32 31
-2 |38 17 16 15 14 13 30
-1 |39 18  5  4  3 12 29
 0 |40 19  6  1  2 11 28
 1 |41 20  7  8  9 10 27
 2 |42 21 22 23 24 25 26
 3 |43 44 45 46 47 48 49
이 문제는 위와 같이 채운 것을 예쁘게 출력하면 된다. r1, c1, r2, c2가 입력으로 주어진다. r1, c1은 가장 왼쪽 위 칸이고, r2, c2는 가장 오른쪽 아래 칸이다.

예쁘게 출력한다는 것은 다음과 같이 출력하는 것이다.

출력은 r1행부터 r2행까지 차례대로 출력한다.
각 원소는 공백으로 구분한다.
모든 행은 같은 길이를 가져야 한다.
공백의 길이는 최소로 해야 한다.
모든 숫자의 길이(앞에 붙는 공백을 포함)는 같아야 한다.
만약 수의 길이가 가장 길이가 긴 수보다 작다면, 왼쪽에서부터 공백을 삽입해 길이를 맞춘다.
입력
첫째 줄에 네 정수 r1, c1, r2, c2가 주어진다.

출력
r2 - r1 + 1개의 줄에 소용돌이를 예쁘게 출력한다.

제한
-5 000 ≤ r1, c1, r2, c2 ≤ 5,000
0 ≤ r2 - r1 ≤ 49
0 ≤ c2 - c1 ≤ 4


예제 입력 1 
-3 -3 2 0

예제 출력 1 
37 36 35 34
38 17 16 15
39 18  5  4
40 19  6  1
41 20  7  8
42 21 22 23


예제 입력 2 
-2 2 0 3

예제 출력 2 
13 30
12 29
11 28


예제 입력 3 
-1 -2 -1 1

예제 출력 3 
18  5  4  3


예제 입력 4 
0 0 0 0

예제 출력 4 
1


"""

def get_value(r, c):
    if r == 0 and c == 0:
        return 1
    
    # 현재 좌표가 속한 테두리 번호 찾기
    layer = max(abs(r), abs(c))
    start_val = (2*(layer-1) + 1)**2 + 1  # 현재 테두리의 시작값
    
    if c == layer:  # 오른쪽 변
        return start_val + (r + layer)
    elif r == -layer:  # 위쪽 변
        return start_val + 2*layer + (layer - c)
    elif c == -layer:  # 왼쪽 변
        return start_val + 4*layer + (layer - r)
    else:  # 아래쪽 변 (r == layer)
        return start_val + 6*layer + (layer + c)

def main():
    # 입력 받기
    r1, c1, r2, c2 = map(int, input().split())
    
    # 결과를 저장할 배열 생성
    result = []
    max_len = 0
    
    # 각 위치의 값을 계산하고 최대 길이 찾기
    for r in range(r1, r2+1):
        row = []
        for c in range(c1, c2+1):
            val = get_value(r, c)
            row.append(val)
            max_len = max(max_len, len(str(val)))
    
        result.append(row)
    
    # 결과 출력
    for row in result:
        print(' '.join(str(val).rjust(max_len) for val in row))

if __name__ == "__main__":
    main()
