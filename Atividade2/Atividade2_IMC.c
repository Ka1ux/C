#include <stdio.h>

int main() {
    float peso, altura, imc;
    float somaIMC = 0;
    int totalUsuarios = 0;
    char continuar;

    printf("=== Calculadora de IMC ===\n\n");

    do {
        // Entrada de dados do usuário
        printf("Digite o peso em kg: ");
        scanf("%f", &peso);
        printf("Digite a altura em metros: ");
        scanf("%f", &altura);

        // Calculando o IMC
        imc = peso / (altura * altura);
        printf("IMC: %.2f\n", imc);

        // Classificação do IMC
        if (imc < 18.5) {
            printf("Classificacao: Abaixo do peso\n");
        } else if (imc >= 18.5 && imc < 25) {
            printf("Classificacao: Peso normal\n");
        } else if (imc >= 25 && imc < 30) {
            printf("Classificacao: Sobrepeso\n");
        } else {
            printf("Classificacao: Obesidade\n");
        }

        // Atualizando soma e contagem
        somaIMC += imc;
        totalUsuarios++;

        // Pergunta se deseja continuar
        printf("\nDeseja calcular o IMC de outro usuario? (s/n): ");
        scanf(" %c", &continuar);
        printf("\n");
    } while (continuar == 's' || continuar == 'S');

    // Calculando e mostrando média geral
    if (totalUsuarios > 0) {
        printf("Media geral dos IMCs: %.2f\n", somaIMC / totalUsuarios);
    } else {
        printf("Nenhum IMC foi calculado.\n");
    }

    printf("=== Fim do programa ===\n");
    return 0;
}
