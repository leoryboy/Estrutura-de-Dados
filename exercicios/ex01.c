// Exercício 1: Boas-vindas personalizadas
#include <stdio.h>

int main(){
    int numero;

    printf(" * BOAS-VINDAS PERSONALIZADAS *\n Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){ // Se o número é divisível por 2, se o resto da divisão pro 2 é zero ele é "PAR", caso o (resto = 1 ou -1) é "ÍMPAR"
        printf("O numero %d eh PAR!!!.", numero); 
    }else{
        printf("O numero %d eh IMPAR!!!.", numero);
    }
    return 0;
}