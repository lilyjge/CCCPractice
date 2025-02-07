n = int(input())
nums = []
for i in range(0, n):
    a = int(input())
    if a == 0:
        nums.pop()
    else:
        nums.append(a)
print(sum(nums))