t = int(input())
for i in range(t):
    x, y = map(int, input().split())
    a, b = map(int, input().split())
    min_price = 0

    while x or y:

        if ((x != 0) and (y != 0)):
            min_price += b
            x -= 1
            y -= 1

        if ((x == 0) and (y != 0)) or ((x != 0) and (y == 0)):
            min_price += a
            if(x == 0):
                y -= 1
            else:
                x -= 1

    print(min_price)
