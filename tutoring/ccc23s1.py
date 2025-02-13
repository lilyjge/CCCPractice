n = int(input())
r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))

cnt = 0
for i in range(n):
    if r1[i] == 1:
        cnt += 3
    if r2[i] == 1:
        cnt += 3
    if i % 2 == 0 and r1[i] == 1 and r2[i] == 1:
        cnt -= 2
    if i > 0 and r1[i] == 1 and r1[i-1] == 1:
        cnt -= 2
    if i > 0 and r2[i] == 1 and r2[i-1] == 1:
        cnt -= 2
print(cnt)