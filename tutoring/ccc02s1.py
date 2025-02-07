pink = int(input())
green = int(input())
red = int(input())
orange = int(input())

money = int(input())

orange_max = money // orange
red_max = money // red
green_max = money // green
pink_max = money // pink

smallest = money
total = 0

for i in range(0, orange_max + 1):
    for j in range(0, red_max + 1):
        for k in range(0, green_max + 1):
            for l in range(0, pink_max + 1):
                if(i * orange + j * red + k * green + l * pink == money):
                    print(f"# of PINK is {l} # of GREEN is {k} # of RED is {j} # of ORANGE is {i}")
                    total += 1
                    if i + j + k + l < smallest:
                        smallest = i + j + k + l
print(f"Total combinations is {total}.")
print(f"Minimum number of tickets to print is {smallest}.")