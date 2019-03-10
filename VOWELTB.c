#include <stdio.h>

int main() {
    char C;
    scanf("%c \n", &C);
    if (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}