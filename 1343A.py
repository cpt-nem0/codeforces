t = int(input())
for i in range(t):
    n = int(input())
    for k in range(2, 30):
        if n % (2**k - 1) == 0:
            print(int((n) / (2**k - 1)))
            break
