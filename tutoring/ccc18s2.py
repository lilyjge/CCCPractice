n = int(input())
matrix = []
for i in range(n):
    matrix.append([int(x) for x in input().split()])

def rotate(matrix):
    newmatrix = []
    for i in range(n):
        newmatrix.append([])
        for j in range(n):
            newmatrix[i].append(matrix[j][n - i - 1])
    return newmatrix

def check(matrix):
    for i in range(n):
        for j in range(1, n):
            if matrix[i][j] <= matrix[i][j - 1]:
                return False
    for i in range(1, n):
        for j in range(n):
            if matrix[i][j] <= matrix[i - 1][j]:
                return False
    return True

while not check(matrix):
    matrix = rotate(matrix)
for i in range(n):
    print(" ".join(str(x) for x in matrix[i]))