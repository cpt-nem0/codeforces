t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    num = 1
    pos = 0
    while True:
        if num % n != 0:
            pos += 1
        if pos == k:
            break
        num += 1
    print(num)
