number = int(input("Masukkan angka : "))
if number > 0:
    number %= 10
    print("Digit terakhir adalah " + str(number))
else:
    print("Anda salah!!!!")
    