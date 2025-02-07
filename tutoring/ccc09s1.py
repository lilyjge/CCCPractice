import math

a = int(input())
b = int(input())

lower3 = math.floor(a ** (1/3))
upper3 = math.ceil(b ** (1/3))
cnt = 0
for i in range(lower3, upper3 + 1):
    print(i)
    num = round(i ** 3)
    if num < a or num > b:
        continue
    sqrt = round(num ** 0.5)
    if sqrt * sqrt == num:
        cnt += 1
print(cnt)