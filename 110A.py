n = input()
count = 0

for d in n:
    if d == "4" or d == "7":
        count += 1

if count == 4 or count == 7:
    print("YES")
else:
    print("NO")
