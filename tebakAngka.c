#include <stdio.h>
#include <stdlib.h>

int main() {
    long int x;
    scanf("%ld", &x);

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    long int selisihA = abs(x - a);
    long int selisihB = abs(x - b);
    long int selisihC = abs(x - c);
    

    if (selisihA == selisihB && selisihA == selisihC) {
        printf("%d", a);
        printf(" %ld\n", selisihA);
    }

    else if(selisihA < selisihC && selisihA == selisihB) {
        printf("%d", a);
        printf(" %ld\n", selisihA);
    }

    else if(selisihB < selisihA && selisihB == selisihC) {
        printf("%d", b);
        printf(" %ld\n", selisihB);
    }
    
    else if(selisihC < selisihB && selisihC == selisihA) {
        printf("%d", c);
        printf(" %ld\n", selisihC);
    }

    else if (selisihA < selisihB && selisihA < selisihC ) {
        printf("%d", a);
        printf(" %ld\n", selisihA);
    }
    else if (selisihB < selisihC && selisihB < selisihA ) {
        printf("%d", b);
        printf(" %ld\n", selisihB);
    }
    else if (selisihC < selisihA && selisihC < selisihB) {
        printf("%d", c);
        printf(" %ld\n", selisihC);
    }
    
    return 0;
}