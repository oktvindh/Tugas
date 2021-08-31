#include <stdio.h>
int main() {
    int a, b, c, d;
    float x, y, hasil;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%f %f", &x, &y);
    hasil = a*x + b*(x+y) + c*(x+(2*y)) +d*(x+(3*y));
    
    printf("Nilai m adalah : %.2f", hasil);
    return 0;
}