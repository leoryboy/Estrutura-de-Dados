#include <stdio.h>

int main() {
    int n, i, j, passos = 0;
    float temp;

    printf("Quantos precos deseja cadastrar? ");
    scanf("%d", &n);

    float preco[n];

    // Leitura dos preços
    printf("Digite os precos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &preco[i]);
    }

    // Exibe os preços antes da ordenação
    printf("\nPrecos antes da ordenacao:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", preco[i]);
    }

    // Algoritmo Insertion Sort
    for (i = 1; i < n; i++) {
        temp = preco[i];
        j = i - 1;
        while (j >= 0 && preco[j] > temp) {
            preco[j + 1] = preco[j];
            j--;
            passos++; // conta o deslocamento
        }
        preco[j + 1] = temp;
        passos++; // conta a inserção
    }

    // Exibe os preços após a ordenação
    printf("\n\nPrecos depois da ordenacao (Insertion Sort):\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", preco[i]);
    }

    printf("\n\nTotal de passos realizados: %d\n", passos);

    return 0;
}
