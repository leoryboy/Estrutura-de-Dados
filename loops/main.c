#include <stdio.h>
int main() {
    int soma = 0;
    int numero;
    for(int i = 0; i < 10 ; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("A soma dos numeros digitados e: %d\n", soma);
    return 0;
}