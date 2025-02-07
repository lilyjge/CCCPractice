n = int(input())
nums = [int(x) for x in input().split()]

nums.sort()
ans = []
low = n // 2
if n % 2 == 0:
    low -= 1
hi = low + 1
while low >= 0 or hi < n:
    if low >= 0:
        ans.append(nums[low])
        low -= 1
    if hi < n:
        ans.append(nums[hi])
        hi += 1
print(" ".join(str(x) for x in ans))
