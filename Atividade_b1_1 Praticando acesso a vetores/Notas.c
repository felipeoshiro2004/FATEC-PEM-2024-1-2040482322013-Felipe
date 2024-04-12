#include <stdio.h>

int main() {
    int N;
    while (1) {
        scanf("%d", &N); 
        if (N == 0) break; 

        float notas[N]; 

        for (int i = 0; i < N; i++) {
            scanf("%f", &notas[i]);
        }


        float menor = notas[0], maior = notas[0];
        for (int i = 1; i < N; i++) {
            if (notas[i] < menor) menor = notas[i];
            if (notas[i] > maior) maior = notas[i];
        }

        float soma = 0;
        for (int i = 0; i < N; i++) {
            if (notas[i] != menor && notas[i] != maior) soma += notas[i];
        }

        float nota_final = soma / (N - 2);
        printf("%.1f\n", nota_final); 
    }

    return 0;
}