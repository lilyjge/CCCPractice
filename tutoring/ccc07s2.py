n = int(input())
boxes = []
for i in range(0, n):
    dimensions = [int(n) for n in input().split()]
    dimensions.sort()
    boxes.append(dimensions)

m = int(input())
for i in range(0, m):
    dimensions = [int(n) for n in input().split()]
    dimensions.sort()
    mi = -1
    for box in boxes:
        if dimensions[0] <= box[0] and dimensions[1] <= box[1] and dimensions[2] <= box[2]:
            if mi == -1:
                mi = box[0] * box[1] * box[2]
            else:
                mi = min(mi, box[0] * box[1] * box[2])
    if mi == -1:
        print("Item does not fit.")
    else:
        print(mi)