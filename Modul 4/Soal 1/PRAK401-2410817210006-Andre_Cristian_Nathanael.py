def angka_simbol(n, simbol) :
    for i in range(1, 51) :
        if i % n == 0 :
            print(simbol, end = " ")
        else :
            print(i, end = " ")
    
angka, simbol = input().split()
angka = int(angka)
angka_simbol(angka, simbol)