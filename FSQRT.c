#include <stdio.h>
#include <math.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        double N;
        scanf("%lf",&N);
        printf("%d\n",(int) sqrt(N));
    }
    return 0;
}