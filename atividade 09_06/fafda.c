#include <stdio.h>
 
int main() {
 
    int n, contpar = 0, contimpar = 0;
    int vetor[15];
    int par [5], impar[5];

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        vetor[i]= n;
    }

    for (int i = 0; i < 15; i++)
    {
        if (vetor[i] % 2 == 0){
            if (contpar < 5){
                par[contpar] = vetor[i];
                contpar++;
            }
            else {
                for(int i = 0; i< 5; i++){
                    printf("par[%d] = %d\n", i , par[i]);
                }
                contpar = 0;
                par[contpar] = vetor[i];
                contpar++;
            }
        }
        else {
            if (contimpar < 5){
                impar[contimpar] = vetor[i];
                contimpar++;
            }
            else {
                for(int i = 0; i< 5; i++){
                    printf("impar[%d] = %d\n", i , impar[i]);
                }
                contimpar = 0;
                impar[contimpar] = vetor[i];
                contimpar++;
            }
        }   

    }
    for (int i = 0; i< contimpar; i++){
        printf("impar[%d] = %d\n", i , impar[i]);
    }
    for (int i = 0; i< contpar; i++){
        printf("par[%d] = %d\n", i , par[i]);
    }
 
    return 0;
}