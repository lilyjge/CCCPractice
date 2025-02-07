t = int(input())
for i in range(t):
    n = int(input())
    candies = []
    for j in range(n):
        candies.append(int(input()))
    branch = []
    cnt = 1
    while len(candies) > 0:
        if candies[-1] == cnt:
            cnt += 1
            candies.pop()
        elif len(branch) > 0 and branch[-1] == cnt:
            cnt += 1
            branch.pop()
        else:
            branch.append(candies.pop(-1))
    while(len(branch) > 0 and branch[-1] == cnt):
        cnt += 1
        branch.pop()
    if len(branch) == 0:
        print("Y")
    else:
        print("N")