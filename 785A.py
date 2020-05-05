n = int(input())
total = 0
for i in range(n):
    fig = input()
    if fig == "Tetrahedron":
        total += 4
    elif fig == "Cube":
        total += 6
    elif fig == "Octahedron":
        total += 8
    elif fig == "Dodecahedron":
        total += 12
    elif fig == "Icosahedron":
        total += 20
print(total)

test = "test"
