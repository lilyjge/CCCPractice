x = int(input())
y = int(input())

numbers_printed = y - x + 1
i = 1
while i * i <= numbers_printed:
    i += 1
arr = [[0 for x in range(i)] for y in range(i)]

center = i // 2
if i % 2 == 0:
    center -= 1

cnt = 1
row = center
col = center
layer = 2
same_dir = 1 # number of times we moved in same direction
done = 1 # 1 for horizontal, 2 for vertical
directions = [(1, 0), (0, 1), (-1, 0), (0, -1)]
dir = 1 # 0 = down, 1 = right, 2 = up, 3 = left
arr[center][center] = x
row += 1
while cnt < numbers_printed:
    # print("row" + str(row) + " col " + str(col) + "val " + str(x + cnt) + " same dir " + str(same_dir))
    arr[row][col] = x + cnt
    cnt += 1
    if layer == same_dir:
        if done == 2:
            layer += 1
            done = 1
            same_dir = 1
            row += directions[dir][0]
            col += directions[dir][1]
            if dir == 3:
                dir = 0
            else:
                dir += 1
        else:
            if dir == 3:
                dir = 0
            else:
                dir += 1
            done = 2
            same_dir = 2
            row += directions[dir][0]
            col += directions[dir][1]
    else:
        same_dir += 1
        row += directions[dir][0]
        col += directions[dir][1]

for row in arr:
    prtstr = ""
    for el in row:
        if el != 0:
            prtstr += str(el) + " "
    print(prtstr)