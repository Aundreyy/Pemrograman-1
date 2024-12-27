def ganjil_genap(batas) :
    bil_ganjil = [i for i in range(1, batas + 1) if i % 2 != 0]
    print(" ", " ". join(map(str, bil_ganjil)))
    bil_genap = [i for i in range(batas, 1, -1)if i % 2 == 0]
    print(" ", " ". join(map(str, bil_genap)))
limit = int(input())
ganjil_genap(limit)