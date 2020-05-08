import sys
word = input()

if word[0].islower():
    print('{}{}'.format(word[0].upper(), word[1:]))
    sys.exit()
else:
    print(word)
    sys.exit()
