n = int(input())
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]

cnt = 0
sum1 = 0
sum2 = 0
for i in range(0, len(a)):
    sum1 += a[i]
    sum2 += b[i]
    if sum1 == sum2:
        cnt = i + 1
print(cnt)