x = int(input())
together = {}
for i in range(x):
    a, b = input().split()
    if a not in together:
        together[a] = []
    together[a].append(b)
    if b not in together:
        together[b] = []
    together[b].append(a)

y = int(input())
separate = {}
for i in range(y):
    a, b = input().split()
    if a not in separate:
        separate[a] = []
    separate[a].append(b)
    if b not in separate:
        separate[b] = []
    separate[b].append(a)

g = int(input())
cnt = 0
for i in range(g):
    a, b, c = input().split()
    if a in together:
        for i in together[a]:
            if i != b and i != c:
                cnt += 1
    if a in separate:
        for i in separate[a]:
            if i == b:
                cnt += 1
            if i == c:
                cnt += 1
    
    if b in together:
        for i in together[b]:
            if i != a and i != c:
                cnt += 1
    if b in separate:
        for i in separate[b]:
            if i == a:
                cnt += 1
            if i == c:
                cnt += 1
    
    if c in together:
        for i in together[c]:
            if i != a and i != b:
                cnt += 1
    if c in separate:
        for i in separate[c]:
            if i == a:
                cnt += 1
            if i == b:
                cnt += 1
print(cnt // 2)