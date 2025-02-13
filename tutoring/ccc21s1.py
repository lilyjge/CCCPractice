n = int(input())

wood = list(map(int, input().split()))
width = list(map(int, input().split()))

total = 0
for i in range(0, n):
    total += width[i] * (wood[i] + wood[i + 1]) / 2
print(total)