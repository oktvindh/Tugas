#include <stdio.h>
float main() {
    double a;
    double y;
    int x;
    scanf("%f", &a);
    x = a;
    y = a-x;
    printf("%d %.5f", x, y);
    return 0;
}