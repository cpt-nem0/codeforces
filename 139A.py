n = int(input())
weak = list(map(int, input().split()))
i = 0
while i < 7:
    if i == len(weak) - 1:
        i = 0
    if n <= weak[i]:
        print(i + 1)
        break
    else:
        n -= weak[i]
    i += 1
