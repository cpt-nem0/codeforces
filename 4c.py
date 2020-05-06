n = int(input())
d = {}
for i in range(n):
    s = input()
    if s in d:
        print('{}{}'.format(s, d[s]))
        d[s] += 1
    else:
        print('OK')
        d[s] = 1
