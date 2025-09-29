#include <stdio.h>  // Biblioteca para fun��es de entrada e sa�da (printf, scanf)
#include <string.h> // Biblioteca para manipula��o de strings (strcpy)
#include <locale.h> // Biblioteca para configurar a acentua��o para portugu�s

// In�cio do programa (equivale a "Algoritmo")
int main() {
    // Configura o programa para exibir acentos corretamente no console
    setlocale(LC_ALL, "Portuguese");

    int i; // Vari�vel de controle do la�o de repeti��o

    // La�o 'Para i de 1 at� 3 fa�a'
    for (i = 1; i <= 3; i++) {
        // --- Declara��o das vari�veis ---
        char nome[100];      // Equivale a 'Declare nome: texto'
        float preco_anterior; // Equivale a 'Declare preco_anterior: real'
        float preco_atual;    // Equivale a 'Declare preco_atual: real'
        float variacao;       // Equivale a 'Declare variacao: real'
        char situacao[50];   // Equivale a 'Declare situacao: texto'

        printf("----------------------------------\n");
        printf("Analisando Produto %d de 3\n", i);
        printf("----------------------------------\n");

        // --- Entrada de Dados ---
        printf("Digite o nome do produto: ");
        // Limpa o buffer de entrada antes de ler a string para evitar erros
        fflush(stdin);
        // L� o nome do produto (equivale a 'Leia(nome)')
        // Usamos fgets para ler nomes com espa�os
        fgets(nome, sizeof(nome), stdin);
        // Remove o caractere de nova linha '\n' que o fgets captura
        nome[strcspn(nome, "\n")] = 0;


        printf("Digite o pre�o anterior (R$): ");
        scanf("%f", &preco_anterior); // Equivale a 'Leia(preco_anterior)'

        printf("Digite o pre�o atual (R$): ");
        scanf("%f", &preco_atual); // Equivale a 'Leia(preco_atual)'

        // --- Processamento ---
        // Calcula a varia��o percentual
        variacao = ((preco_atual - preco_anterior) / preco_anterior) * 100;

        // Estrutura condicional 'Se-Sen�o' para definir a situa��o
        if (variacao > 10) {
            strcpy(situacao, "AUMENTO ABUSIVO");
        } else if (variacao > 0) {
            strcpy(situacao, "AUMENTO");
        } else if (variacao < 0) {
            strcpy(situacao, "QUEDA");
        } else {
            strcpy(situacao, "EST�VEL");
        }

        // --- Sa�da de Dados ---
        printf("\nResumo de varia��o de Pre�os:\n");
        printf("Produto: %s\n", nome);
        printf("Pre�o Anterior: R$%.2f\n", preco_anterior);
        printf("Pre�o Atual: R$%.2f\n", preco_atual);
        // '%.2f' formata o n�mero para ter 2 casas decimais
        // '%%' � usado para imprimir o caractere '%'
        printf("Varia��o: %.2f%%\n", variacao);
        printf("Situa��o: %s\n", situacao);
        printf("----------------------------------\n\n");
    } // Fim do 'Para' (FimPara)

    return 0; // Fim do programa (FimAlgoritmo)
}
