//Exercício 10: Caixa registradora (while com total)

#include <stdio.h>
#include <stdbool.h>

int main(){
    double preco;
    double soma = 0;
    int quantidade = 0;

    printf(" * SIMULADOR DE COMPRAS *\n");
    printf("Digite os precos dos itens (0 para finalizar):\n");

    while(true){  // loop infinito, só para quando o usuário digitar 0
        printf("Preco: ");
        scanf("%lf", &preco);

        if(preco == 0){
            break;
        }
        if(preco < 0){
            printf("Preco invalido!!! Nao sera considerado.\n");
            continue; // volta para o inicio do while
        }

        soma = soma + preco; // acumula o preço válido
        quantidade++; // aumenta a quantidade de itens
    }

    printf("\nResumo da compra \n");
    printf("Quantidade de intens: %d\n", quantidade);
    printf("Total: R$ %.2f\n", soma);
    return 0;
}
