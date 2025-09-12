//Exercício 4: Validação de entrada (while)

#include <stdio.h>

int main(){
    int idade;

    printf(" * VALIDACAO DE ENTRADA (WHILE) *\n Digite uma idade: ");
    scanf("%d", &idade);

    while(idade < 0 || idade > 120){ // Se idade for MENOR que 0 ou Idade MAIOR que 120
        printf("Idade invalida!!! Tente novamente...\n"); //Pedindo a idade dentro do "while" senão ele fica preso no loop infinito
        scanf("%d", &idade);
    }
    printf("Idade valida: %d", idade); //Mostrando a mensagem fora do "while" porque só assim eu sei que ele passou no teste de cima
    return 0;
}