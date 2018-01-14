#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int t;
    int counter;
    while(scanf("%d", &t) != EOF){
        if(t%k==0){
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}