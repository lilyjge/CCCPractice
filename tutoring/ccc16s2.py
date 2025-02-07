q = int(input())
n = int(input())

a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]

a.sort()
if q == 1:
    b.sort()
else:
    b.sort(reverse=True)

total = 0
for i in range(n):
    total += max(a[i], b[i])
print(total)