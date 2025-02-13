m = int(input())
n = int(input())

a = [list(map(int, input().split())) for i in range(m)]

rooms = {}

cnt = 1
for i in range(1, m+1):
    for j in range(1, n+1):
        if i * j not in rooms:
            rooms[i * j] = []
        rooms[i * j].append(cnt)
        cnt += 1
# print(rooms)
adj = [[] for i in range(m * n + 1)]
cnt = 1
for i in range(1, m + 1):
    for j in range(1, n + 1):
        if a[i-1][j-1] not in rooms:
            cnt += 1
            continue
        adj[cnt] = rooms[a[i-1][j-1]]
        cnt += 1
# print(adj)
q = []
visited = [False] * (m * n + 1)
q.append(1)

while len(q) > 0:
    v = q.pop(0)
    visited[v] = True
    for u in adj[v]:
        if not visited[u]:
            if u == m * n:
                visited[m * n] = True
                break
            q.append(u)
    if visited[m * n]:
        break

if visited[m * n]:
    print("yes")
else:
    print("no")