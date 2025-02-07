n = int(input())
for i in range(0, n):
    date = input()
    values = date.split()
    year = int(values[0])
    if year < 1989:
        print("Yes")
    elif year > 1989:
        print("No")
    else:
        month = int(values[1])
        if month > 2:
            print("No")
        elif month < 2:
            print("Yes")
        else:
            day = int(values[2])
            if day > 27:
                print("No")
            elif day <= 27:
                print("Yes")