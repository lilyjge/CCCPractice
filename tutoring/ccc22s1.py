n = int(input())

cnt = 0
nums = 0
while nums * 5 <= n:
    if (n - nums * 5) % 4 == 0:
        cnt += 1
    nums +=1
print(cnt)