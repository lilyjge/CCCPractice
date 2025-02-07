j = int(input())
a = int(input())
jerseys = []
for i in range(0, j):
    jerseys.append(input())
cnt = 0
for i in range(0, a):
    size, num = input().split()
    num = int(num)
    if jerseys[num - 1] <= size and jerseys[num - 1] != "X": # L < M < S
        jerseys[num - 1] = "X"
        cnt += 1
print(cnt)