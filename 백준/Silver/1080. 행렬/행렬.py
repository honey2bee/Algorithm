N, M= map(int, input().split())
A=[list(map(int, input())) for _ in range(N)]
B=[list(map(int, input())) for _ in range(N)]

if A==B:
    print(0)
elif N < 3 or M <3:
    print(-1)
else:
    count=0
    for i in range(N-2):
        for j in range(M-2):
            if A[i][j]!=B[i][j]: #다르면 3*3배열 뒤집기
                count+=1
                for v in range(3):
                    for w in range(3):
                        A[i + v][j + w] = 1 - A[i+v][j+w]

    if A==B:
        print(count)
    else:
        print(-1)
