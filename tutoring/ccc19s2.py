t = int(input())

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

for i in range(t):
    n = int(input())
    i = 0
    while True:
        if isPrime(n + i) and isPrime(n - i):
            print(n - i, n + i)
            break
        i += 1