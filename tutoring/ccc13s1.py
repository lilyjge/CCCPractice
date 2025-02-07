n = int(input())
n += 1
while True:
    s = str(n)
    digits = set()
    for c in s:
        digits.add(c)
    if len(digits) == len(s):
        print(n)
        break
    n += 1