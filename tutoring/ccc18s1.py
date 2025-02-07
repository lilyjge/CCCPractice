n = int(input())
a = []
for i in range(n):
    a.append(int(input()))

a.sort()
ans = 2000000001
for i in range(1, n - 1):
    cur = 0
    cur += (a[i] - a[i - 1]) / 2
    cur += (a[i + 1] - a[i]) / 2
    ans = min(ans, cur)
print(round(ans, 1))