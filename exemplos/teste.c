// laços de repetição ou estruturas de repetição (for, while, do-while)
#include <stdio.h>
#include <stdbool.h>
int main() {
    // for (inicialização; condição; incremento/decremento)
    // Esse laço funciona com um número conhecido de repetições
    /*for (int i = 1; i < 4; i++) {
        printf("%d ", i);
    }
    printf("\n");
    // while (condição)
    // Esse laço funciona com um número desconhecido de repetições
    int i = 1; // variável de controle
    while (i < 3) { // condição de parada (true ou false)
        printf("%d \n", i);
        i++; // seu dinheiro
    }

    //  while infinito
    int cansei = 10; // variável de controle
    while (true) { // condição de parada (true ou false)
        printf("%s %d\n", "Executando...", cansei);

        // condição de parada
        if (cansei > 0) {
            cansei--; // decremento
        } else {
            break; // sair do laço
        }
    }*/

    // Ler valores no teclado até uma condição de parada
    int numero;
    int contador = 0;
    while (true) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
        if (numero == 0) {
            printf("Total de numeros digitados: %d\n", contador);
            break;
        }
        contador ++;
        printf("Voce digitou: %d\n", numero);        
    }

    // do-while (condição)
    // Esse laço funciona com um número desconhecido de repetições
    // A diferença é que o bloco de código é executado pelo menos uma vez
    // Verificar a condição depois de executar o bloco
    /*do { // faça
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
        if (numero == 0) {
            printf("Total de numeros digitados: %d\n", contador);
            break;
        }
        contador ++;
        printf("Voce digitou: %d\n", numero);
    } while (true);
    return 0;*/
}