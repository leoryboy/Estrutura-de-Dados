//Exercício 6: Contagem regressiva segura

#include <stdio.h>
#include <stdbool.h> // Biblioteca para definir o dado "booleano" e valores "true" "false"

int main(){
    int numero;

    printf(" * CONTAGEM REGRESSIVA SEGURA *\n Digite um numero: ");
    scanf("%d", &numero);

    while(numero < 0){ // Valida se o número dígitado não é negativo
        printf("Numero invalido, insira outro numero positivo!!!\n");
        scanf("%d", &numero);
    }
    while(numero >= 0){ // Aqui é, enquanto o "numero" digitado for maior ou = a 0, continua o loop
        printf("%d\n", numero);
        numero--; // E aqui vai decrementando (ex: usuário digita 5 | 5 - 4 - 3 - 2 - 1 - 0)
    }
    printf("FIM!!!");
}