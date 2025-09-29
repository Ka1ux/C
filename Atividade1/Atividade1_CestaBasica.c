#include <stdio.h>  // Biblioteca para funções de entrada e saída (printf, scanf)
#include <string.h> // Biblioteca para manipulação de strings (strcpy)
#include <locale.h> // Biblioteca para configurar a acentuação para português

// Início do programa (equivale a "Algoritmo")
int main() {
    // Configura o programa para exibir acentos corretamente no console
    setlocale(LC_ALL, "Portuguese");

    int i; // Variável de controle do laço de repetição

    // Laço 'Para i de 1 até 3 faça'
    for (i = 1; i <= 3; i++) {
        // --- Declaração das variáveis ---
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
        // Lê o nome do produto (equivale a 'Leia(nome)')
        // Usamos fgets para ler nomes com espaços
        fgets(nome, sizeof(nome), stdin);
        // Remove o caractere de nova linha '\n' que o fgets captura
        nome[strcspn(nome, "\n")] = 0;


        printf("Digite o preço anterior (R$): ");
        scanf("%f", &preco_anterior); // Equivale a 'Leia(preco_anterior)'

        printf("Digite o preço atual (R$): ");
        scanf("%f", &preco_atual); // Equivale a 'Leia(preco_atual)'

        // --- Processamento ---
        // Calcula a variação percentual
        variacao = ((preco_atual - preco_anterior) / preco_anterior) * 100;

        // Estrutura condicional 'Se-Senão' para definir a situação
        if (variacao > 10) {
            strcpy(situacao, "AUMENTO ABUSIVO");
        } else if (variacao > 0) {
            strcpy(situacao, "AUMENTO");
        } else if (variacao < 0) {
            strcpy(situacao, "QUEDA");
        } else {
            strcpy(situacao, "ESTÁVEL");
        }

        // --- Saída de Dados ---
        printf("\nResumo de variação de Preços:\n");
        printf("Produto: %s\n", nome);
        printf("Preço Anterior: R$%.2f\n", preco_anterior);
        printf("Preço Atual: R$%.2f\n", preco_atual);
        // '%.2f' formata o número para ter 2 casas decimais
        // '%%' é usado para imprimir o caractere '%'
        printf("Variação: %.2f%%\n", variacao);
        printf("Situação: %s\n", situacao);
        printf("----------------------------------\n\n");
    } // Fim do 'Para' (FimPara)

    return 0; // Fim do programa (FimAlgoritmo)
}
