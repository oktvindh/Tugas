#include <stdio.h>

void main() {
    char inputString[50];
    printf("Input a string :");
    fgets(inputString, sizeof inputString, stdin);

    printf("The string is : %s", inputString);
}