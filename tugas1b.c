#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a, b, c; //Masukkan bilangan a, b, c.
   scanf("%d %d %d", &a, &b, &c); //Baca bilangan a, b, c.

   int x, y, z;

   x = abs(a-b); //Hitung selisih antara bilangan a dan b lalu masukkan dalam variabel x.
   y = abs(a-c); //Hitung selisih antara bilangan a dan c lalu masukkan dalam variabel y.
   z = abs(b-c); //Hitung selisih antara bilangan b dan c lalu masukkan dalam variabel z.
   
   
   if (x > y && x > z) {
       printf("Selisih terbesar : %d\n", x); //Jika x lebih besar daripada y DAN x lebih besar daripada z, tampilkan x.
    }
   else if (y > x && y > z) {
       printf("Selisih terbesar : %d\n", y); //Jika y lebih besar daripada x DAN y lebih besar daripada z, tampilkan y.
    }
   else {
       printf("Selisih terbesar : %d\n", z); //Jika tidak keduanya, tampilkan z.
    }
    return 0;
}