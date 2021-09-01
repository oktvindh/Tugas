import math
print("Masukkan koefisien a, b, dan konstanta c")
print("--------------------------------")
a = int(input("a= "))
b = int(input("b= "))
c = int(input("c= "))

x1 = (-b + math.sqrt(b**2 - 4*a*c)) / 2*a
x2 = (-b - math.sqrt(b**2 - 4*a*c)) / 2*a

print("x1 = " + str(x1))
print("x2 = " + str(x2))
