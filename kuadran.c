#include <stdio.h>
int main() {
     long int x, y;
    int kuadran;
    scanf("%ld %ld", &x, &y);

    if (x>0 && y>0)
        kuadran = 1;
    if (x<0 && y>0)
        kuadran = 2;
    if (x<0 && y<0)
        kuadran = 3;
    if (x>0 && y<0)
        kuadran = 4;
    if (x==0 || y==0)
        kuadran = 0;
    
    printf("%d\n", kuadran);

    return 0;
}