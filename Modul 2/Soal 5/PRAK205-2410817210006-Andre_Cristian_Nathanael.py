#kasus 1
import math

a,b=map(float,input().split())

alas=math.sqrt(b**2-a**2)
tinggi=a
keliling=a+b+alas
luas=0.5*a*alas

print(f"Alas: {alas:.0f} cm")
print(f"Tinggi: {tinggi:.0f} cm")
print(f"Keliling: {keliling:.0f} cm")
print(f"Luas: {luas:.0f} cm^2")
print()
#kasus 2
a1=float(input())
b1=float(input())

alas1=math.sqrt(b1**2-a1**2)
tinggi1=a1
keliling1=a1+b1+alas1
luas1=0.5*a1*alas1

print(f"Alas: {alas1:.0f} cm")
print(f"Tinggi: {tinggi1:.0f} cm")
print(f"Keliling: {keliling1:.0f} cm")
print(f"Luas: {luas1:.0f} cm^2")