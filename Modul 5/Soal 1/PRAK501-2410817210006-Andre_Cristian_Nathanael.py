def MaxBilangan(a, b, c, d): 
    nilai = a 
    if b > nilai: 
        nilai = b 
    if c > nilai: 
        nilai = c 
    if d > nilai: 
        nilai = d 
    return nilai 

a, b, c, d = map(int, input().split()) 
hasil = MaxBilangan(a, b, c, d) 
print(hasil) 