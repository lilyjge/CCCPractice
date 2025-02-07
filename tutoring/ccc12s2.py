s = input()
romans = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
total = 0
for i in range(0, len(s)//2):
    arabic = int(s[2*i])
    roman = s[2*i+1]
    if i == len(s)//2 - 1:
        total += arabic * romans[roman]
        break
    next_roman = s[2*i+3]
    if romans[roman] < romans[next_roman]:
        total -= arabic * romans[roman]
    else:
        total += arabic * romans[roman]
print(total)