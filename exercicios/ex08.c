// Exercício 8: Soma de ímpares

#include <stdio.h>

int main(){
    int n;
    int numero_impar;
    int soma = 0;

    printf(" *SOMA DE IMPARES*\n Digete um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        numero_impar = 2*i - 1; // ex: i = 1 → 2*1 - 1 = 1 || i = 2 → 2*2 - 1 = 3 || i = 3 → 2*3 - 1 = 5
        soma = soma + numero_impar; // acumula a soma

        // Estrutura para vericar se esta no último número ÍMPAR ou não
        if(i < n){ // "i" é o contador do loop (i até n) || " i < n" é, não é o último número? então ainda temos mais números ímpares para imprimir
            printf("%d + ", numero_impar); // Caso não seja o último (i < n), Mostra "numero_impar" e adiciona o " + ", para serapar do próximo número
        }else{ // o else é, é o último número (i == n)? então finaliza a conta
            printf("%d = %d\n", numero_impar, soma); // Caso seja o último (else), Mostra o último número sem o sinal de " + " 
        }
    }
    printf("A Soma dos %d primeiros numeros impares eh: %d \n", n, soma);
}