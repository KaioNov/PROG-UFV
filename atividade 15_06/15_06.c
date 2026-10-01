#include <stdio.h>

int main() {

    int N;
    while (scanf("%d", &N) != EOF) {
        
        int matriz[N][N];

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++)
            {
                if(j == (N-1)-i){
                    matriz[i][j] = 2;
                }
                else if(i == j){
                    matriz[i][j] = 1;
                }
                else{
                    matriz[i][j] = 3;
                }
            }
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++)
            {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        
    }

    return 0;
}