kolom = int(input())
isi = []
zetsu_putih = list(map(int, input().split()))
for i in range (kolom):
    print((i+1)*zetsu_putih[i], end=' ')