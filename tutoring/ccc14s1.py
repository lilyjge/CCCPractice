k = int(input())
m = int(input())
friends = [1] * k
for i in range(0, m):
    r = int(input())
    cnt = 0
    for j in range(0, k):
        if friends[j] == 0:
            continue
        cnt += 1
        if cnt == r:
            friends[j] = 0
            cnt = 0
for i in range(0, k):
    if friends[i] == 1:
        print(i + 1)