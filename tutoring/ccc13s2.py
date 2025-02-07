w = int(input())
n = int(input())
total = 0
cars = []
for i in range(0, n):
    cur_w = int(input())
    cars.append(cur_w)
    total += cur_w
    if i >= 4:
        total -= cars[i-4]
    if total > w:
        print(i)
        break
if len(cars) == n:
    print(n)