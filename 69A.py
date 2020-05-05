n = int(input())
force = [0] * 3
for i in range(n):
    vectors = list(map(int, input().split()))
    force = [a + b for a, b in zip(force, vectors)]
if all(i == 0 for i in force):
    print("YES")
else:
    print("NO")
