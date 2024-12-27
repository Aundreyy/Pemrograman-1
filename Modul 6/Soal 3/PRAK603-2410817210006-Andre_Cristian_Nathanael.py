a, b = map(int, input().split())
if (a != b):
    print('Jumlah tidak sama')
else:
    baris_a = list(map(int, input().split()))
    baris_b = list(map(int, input().split()))
    for i in range (a):
        print(baris_a[i] * baris_b[i], end=' ')