num, sub = map(int, input().split())
for i in range(sub):
    if num % 10 == 0:
        num = num//10
    else:
        num -= 1
print(num)
