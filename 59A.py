str = input()
lo_count = 0
up_count = 0
for ch in str:
    if ch.isupper():
        up_count += 1
    else:
        lo_count += 1

if up_count <= lo_count:
    print(str.lower())
else:
    print(str.upper())
