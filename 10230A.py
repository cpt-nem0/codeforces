n = int(input())
temp = list(map(int, input().split()))
temp.sort()
a = temp.pop()
if a == 1:
    print("HARD")
else:
    print("EASY")
