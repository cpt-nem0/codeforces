n = int(input())
que = input()
ct = 0

for i in range(1, n):
    if que[i-1] == que[i]:
        ct += 1

print(ct)
