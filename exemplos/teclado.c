#include <stdio.h>
int main(){
    // Para leitura é necessário informar o operador "&" antes da variável,
    // pois o valor será lido para a memória
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor); // faz a leitura do teclado
    printf("Voce digitou: %d\n", valor);

    double preco;
    printf("Digite um valor real (preco): ");
    scanf("%lf", &preco); // faz a leitura do teclado (lf é l de long e f de float)
    printf("Voce digitou o preco: %.2f\n", preco);

    return 0;
}