a = int(input()) #Masukkan bilangan a, b, c.
b = int(input())
c = int(input())

x = abs(a-b) #Hitung selisih antara bilangan a dan b lalu masukkan dalam variabel x.
y = abs(a-c) #Hitung selisih antara bilangan a dan c lalu masukkan dalam variabel y.
z = abs(b-c) #Hitung selisih antara bilangan b dan c lalu masukkan dalam variabel z.

if x > y and x > z:
    print("Selisih terbesar adalah : " + str(x)) #Jika x lebih besar daripada y DAN x lebih besar daripada z, tampilkan x.
elif y > x and y > z:
    print("Selisih terbesar adalah : " + str(y)) #Jika y lebih besar daripada x DAN y lebih besar daripada z, tampilkan y.
else:
    print("Selisih terbesar adalah : " + str(z)) #Jika tidak keduanya, tampilkan z.    


       