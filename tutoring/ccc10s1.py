n = int(input())
computers = []
for i in range(0, n):
    text = input().split()
    name = text[0]
    value = int(text[1]) * int(text[2]) * int(text[3])
    computers.append((name, value))
computers.sort(key=lambda tup: (tup[1], tup[0]), reverse=True)
name1 = computers[0][0]
ans1 = computers[0][1]
i = 1
while i < len(computers) and ans1 == computers[i][1]:
    if computers[i][0] < name1:
        name1 = computers[i][0]
name2 = name1

