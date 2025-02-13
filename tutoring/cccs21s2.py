m = int(input())
n = int(input())
rows = [False]  * m
cols = [False] * n

k = int(input())
for i in range(k):
    cmd, x = input().split()
    x = int(x)
    if cmd == 'R':
        rows[x - 1] = not rows[x - 1]
    else:
        cols[x - 1] = not cols[x - 1]

col_count = sum(cols)
cnt = 0
for i in range(m):
    if rows[i]:
        cnt += n - col_count
    else:
        cnt += col_count
print(cnt)