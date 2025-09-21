#include <stdio.h>

int main() {
    float precos[10]; // Vetor para armazenar os 10 preços
    int i, j;
    float temp;

    // Entrada de dados pelo usuário
    printf("Digite os preços de 10 produtos:\n");
    for(i = 0; i < 10; i++) {
        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    // Exibindo os dados originais
    printf("\nPrecos originais:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n\n");

    // Bubble Sort em ordem crescente
    for(i = 0; i < 9; i++) { // Cada passagem
        for(j = 0; j < 9 - i; j++) { // Comparar elementos adjacentes
            if(precos[j] > precos[j + 1]) {
                // Troca os valores se estiverem fora de ordem
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor em ordem crescente
    printf("Precos em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n\n");

    // Bubble Sort em ordem decrescente
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9 - i; j++) {
            if(precos[j] < precos[j + 1]) {
                // Troca os valores se estiverem fora de ordem decrescente
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor em ordem decrescente
    printf("Precos em ordem decrescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", precos[i]);
    }
    printf("\n");

    return 0;
}
