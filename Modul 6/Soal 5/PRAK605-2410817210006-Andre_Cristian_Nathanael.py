a = int(input())
MatriksA = []
print('Matriks A')
for b in range (a):
    m = list(map(int, input().split()))
    MatriksA.append(m)
MatriksB = []
print('Matriks B')
for b in range (a):
    m = list(map(int, input().split()))
    MatriksB.append(m)
MatriksAXB = []
print('Matriks AXB')
for b in range (a):
    MatriksAXB.append([])
    for j in range (a):
        x = 0
        for i in range (a):
            x = x + MatriksA[b][i] * MatriksB[i][j]
        MatriksAXB[b].append(x)
for baris in MatriksAXB:
    for m in baris:
        print(m, end=' ')
    print()