#include <stdio.h>
 
int main() {
    int T;
    scanf("%d\n", &T);
    for (int i = 0; i < T; i++) {
        int sum_of_digits = 0;
        int N;
        scanf("%d", &N);
        while (N != 0) {
            sum_of_digits = sum_of_digits + N % 10;
            N = N/10;
        }
        printf("%d\n", sum_of_digits);
    }
    return 0;
} 