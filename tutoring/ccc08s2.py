import math
while True:
    radius = int(input())
    if radius == 0:
        break
    cnt = 0
    x = radius
    while x > 0:
        y = math.floor(math.sqrt(radius**2 - x**2))
        cnt += 2 * y + 1
        x -= 1
    cnt *= 2
    cnt += 2 * radius + 1
    print(cnt)
    
