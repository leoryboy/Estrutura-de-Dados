#include <stdio.h>
int main() {
    int soma = 0;
    int numero;
    int quantidade;
    
    printf("Quantidade de numeros: ");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade ; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("A soma dos numeros digitados eh: %d\n", soma);
    return 0;
}