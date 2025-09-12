// Exercício 7: Menu de opções (do-while)

#include <stdio.h>

int main(){
    int opcao;
    double numero; // para aplicar a operação (dobrar/metade)
    double resultado;

    printf(" * MENU DE OPCOES (DO-WHILE) * \n");

    do {
        printf(" * 1) Dobrar um numero    * \n");
        printf(" * 2) Metade de um numero * \n");
        printf(" * 0) Sair                * \n\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Digite um numero: ");
            scanf("%lf", &numero);
            resultado = numero * 2; // Dobrar um número, se foi isso que o professor realmente pediu kkk
            printf("Resultado: %.0f\n\n", resultado);
        }else if(opcao == 2){
            printf("Digite um numero: ");
            scanf("%lf", &numero);
            resultado = numero / 2; // Metade de um número
            printf("Resultado: %.2f\n\n", resultado);
        }else if(opcao != 0){ // Aqui é para avisar o usuário de entradas inválidas
            printf("Opcao invalida!!!\n\n");
        }
    }while(opcao != 0); // Aqui é para manter o loop ativo até a opção de sair
}