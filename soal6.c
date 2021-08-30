#include <stdio.h>
int main() {
    long int C;
    double F;

    scanf("%ld", &C);
    F = (C*9.0/5) + 32;

    printf("%.2lf\n", F);
    return 0;
}