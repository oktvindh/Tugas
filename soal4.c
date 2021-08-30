#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    float x, y, e, f, g, m;
    scanf("%f %f %f %f %f %f", &x, &y, &e, &f, &g, &m);
    e = x + y;
    f = e + y;
    g = f + y;
    m = (a*y) + (b*e) + (c*f) + (d*g);

    printf("%.2f", m);
    
}