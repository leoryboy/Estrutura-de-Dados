#include <stdio.h>

/*int main(){
    int i;
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    for (i = 1; i <=10; i++){
        printf("%d X %d = %d\n", numero, i, numero * i);
    }
    
}*/


int main() {
    int numero, i, j;

    // Pede um número ao usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Laço para percorrer todas as tabuadas até o número digitado
    for (i = 1; i <= numero; i++) {
        // Laço para gerar cada multiplicação de 1 até 10
        for (j = 1; j <= 10; j++) {
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Linha em branco para separar as tabuadas
    }

    return 0;
}