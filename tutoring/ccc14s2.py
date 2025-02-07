n = int(input())
a = list(input().split())
b = list(input().split())
partners = {}
flag = True
for i in range(0, n):
    p1 = a[i]
    p2 = b[i]
    if p1 in partners and partners[p1] != p2 or p2 in partners and partners[p2] != p1 or p1 == p2:
        print("bad")
        flag = False
        break
    partners[p1] = p2
    partners[p2] = p1
if flag:
    print("good")