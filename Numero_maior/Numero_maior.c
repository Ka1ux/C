#include <stdio.h>

int main() {
    int numeros[5];
    int i, maior;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nO maior numero digitado foi: %d\n", maior);

    return 0;
}
