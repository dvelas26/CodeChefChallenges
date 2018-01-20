#include <stdio.h>

int main() {
    int T;
    scanf("%d\n",&T);
    while(T--){
        int numOfLC = 0;
        int numOfUP = 0;
        int N,K;
        scanf("%d %d\n",&N,&K);
        char s[N+1];
        if (fgets(s, sizeof s, stdin)) {
            for(int i=0;i<N;i++){
                if(s[i] >=97 && s[i]<=122){
                    numOfLC++;
                }else{
                    numOfUP++;
                }
            }
        }
        if(N-numOfLC <= K && N-numOfUP <= K){
            printf("%s\n","both");
        }else{
            if(N-numOfLC <= K){
                printf("%s\n","chef");
            }
            if(N-numOfUP <= K){
                printf("%s\n","brother");
            }
            if(N-numOfLC > K && N-numOfUP > K){
                printf("%s\n","none");
            }
        }
    }
    return 0;
}