n = int(input())
a = []
for i in range(n):
    a.append([int(x) for x in input().split()])
a.sort()
speed = 0
for i in range(1, n):
    speed = max(speed, abs(a[i][1] - a[i - 1][1]) / (a[i][0] - a[i - 1][0]))
print(speed)