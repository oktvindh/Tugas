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
    

    if(selisihA <= selisihB && selisihA <= selisihC)
	{
		printf("%d %ld\n",a ,selisihA);
		
	}

	else if(selisihB <= selisihA && selisihB <= selisihC)
	{
		printf("%d %ld\n",b ,selisihB);
		
	}

	else if(selisihC <= selisihA && selisihC <= selisihB) 
	{
		printf("%d %ld\n",c ,selisihC);
		
	}	
    return 0;
}