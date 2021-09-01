#include <stdio.h>
int main()
{
    int N, a, b, Hasil;
    scanf("%d %d %d %d", &N, &a, &b, &Hasil);
    Hasil = N/a + N/b - N/(a*b);
    printf("%d\n", Hasil);

    return 0;

}