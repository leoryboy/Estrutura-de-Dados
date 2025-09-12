#include <stdio.h>
#include <string.h>

int main() {
    int a = 5;
    int b = 10;
    int sum = a + b;
    
    // printf("A soma de %d e %d = %d\n", a, b, sum);
    // printf("%d Valor de a: %d", a);

    char nomeProduto[50];
    strcpy(nomeProduto, "Leite");

    double preco = 1.59123;

    printf("Nome do produto: %s\n", nomeProduto);
    printf("Valor do produto: %.4f\n", preco);

    return 0;
}