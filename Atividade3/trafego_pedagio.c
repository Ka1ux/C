#include <stdio.h>

#define MAX_DIAS 7  // Pode aumentar se quiser mais dias

int main() {
    int carros[MAX_DIAS] = {0};
    int opcao;
    int dia, quantidade;
    int maiorCarros, diaMaior;
    int totalDias = 0; // Contador de dias registrados

    do {
        printf("\n=== Menu ===\n");
        printf("1. Inserir quantidade de carros do dia\n");
        printf("2. Mostrar quantidade de carros por dia\n");
        printf("3. Mostrar dia com mais carros\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                if(totalDias >= MAX_DIAS) {
                    printf("Todos os dias ja foram registrados.\n");
                    break;
                }
                printf("Digite o numero do dia (1-%d): ", MAX_DIAS);
                scanf("%d", &dia);
                if(dia < 1 || dia > MAX_DIAS) {
                    printf("Dia invalido!\n");
                    break;
                }
                printf("Digite quantos carros passaram neste dia: ");
                scanf("%d", &quantidade);
                carros[dia-1] = quantidade; // Atribuição direta
                totalDias++;
                break;

            case 2:
                printf("\nQuantidade de carros por dia:\n");
                for(int i = 0; i < totalDias; i++) {
                    printf("Dia %d: %d carros\n", i+1, carros[i]);
                }
                break;

            case 3:
                if(totalDias == 0) {
                    printf("Nenhum dia registrado ainda.\n");
                    break;
                }
                maiorCarros = carros[0];
                diaMaior = 1;
                for(int i = 1; i < totalDias; i++) {
                    if(carros[i] > maiorCarros) {
                        maiorCarros = carros[i];
                        diaMaior = i+1;
                    }
                }
                printf("O dia com mais carros foi: Dia %d com %d carros\n", diaMaior, maiorCarros);
                break;

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 4);

    return 0;
}
