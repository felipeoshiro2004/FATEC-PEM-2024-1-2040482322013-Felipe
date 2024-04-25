#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OPERACAO 10


float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

int main() {
    char operacao[MAX_OPERACAO];
    float num1, num2, resultado;
    
    while (1) { 
        printf("Escolha a operacao (+, -, *, /) ou 'S' para sair: ");
        scanf("%s", operacao);

        
        if (strcmp(operacao, "S") == 0 || strcmp(operacao, "s") == 0) {
            printf("Encerrando o programa...\n");
            break; 
        }

        
        printf("Digite os dois operandos: ");
        scanf("%f %f", &num1, &num2);

       
        if (strcmp(operacao, "+") == 0) {
            resultado = soma(num1, num2);
        } else if (strcmp(operacao, "-") == 0) {
            resultado = subtracao(num1, num2);
        } else if (strcmp(operacao, "*") == 0) {
            resultado = multiplicacao(num1, num2);
        } else if (strcmp(operacao, "/") == 0) {
            resultado = divisao(num1, num2);
        } else {
            printf("Operacao invalida!\n");
            continue; 
        }

        
        printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}


float soma(float a, float b) {
    return a + b;
}


float subtracao(float a, float b) {
    return a - b;
}


float multiplicacao(float a, float b) {
    return a * b;
}


float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}
