num = int(input())
denom = int(input())

whole = num // denom
mod = num % denom
gcd = 1
for i in range(1, min(mod, denom)):
    if mod % i == 0 and denom % i == 0:
        gcd = i
mod = mod / gcd
denom = denom / gcd

printstr = ""
if whole != 0:
    printstr += str(int(whole)) + " "
if mod != 0:
    printstr += str(int(mod)) + "/" + str(int(denom))
print(printstr)