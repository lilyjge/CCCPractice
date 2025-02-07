n = int(input())
freq = {}
for i in range(n):
    x = int(input())
    if x in freq:
        freq[x] += 1
    else:
        freq[x] = 1
largest_freq = max(freq.values())
largest = []
for num, f in freq:
    if f == largest_freq:
        largest.append(num)
for num, f in freq:
    if f == largest_freq:
        largest.append(num)
if len(largest) == 1:
    bound = largest[0]
    second_largest = 0
    for num, f in freq:
        if f < largest_freq and f > second_largest:
            second_largest = f
    ans = 0
    for num, f in freq:
        if f == second_largest and abs(bound - num) > ans:
            ans = abs(bound - num)
    print(ans)
else:
    largest = sorted(largest)
    print(largest[-1] - largest[0])
    