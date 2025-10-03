#include <stdio.h>

int main() {
    int A, B;
    int i;

    // Pedir os números para o usuário
    printf("Digite o numero inicial: ");
    scanf("%d", &A);
    printf("Digite o numero final: ");
    scanf("%d", &B);

    // Mostrar todos os números de A até B
    for(i = A; i <= B; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
