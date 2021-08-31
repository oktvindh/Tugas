#include <stdio.h>
#include <math.h>
int main()
{
    long int x;
    double y, z;
    scanf("%lf", &y);
    z = fmod(y, 1.0);
    y = y - z;
    x = (long int)y;

    printf("%ld %.5lf\n", x, z);
    return 0;
}
    
