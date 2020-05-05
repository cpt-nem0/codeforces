n = int(input())
feel = ""
i = 1
while(i <= n):
    if i % 2:
        feel += "I hate "
    else:
        feel += "I love "
    if i == n:
        feel += "it"
    else:
        feel += "that "
    i += 1
print(feel)
