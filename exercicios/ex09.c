//Exercício 9: Múltiplos dentro de um intervalo

#include <stdio.h>

int main(){
    int inicio, fim , k;

    printf(" * MULTIPLO DENTRO DE UM INTERVALO *\n Digite dois numero (inicio e fim): ");
    scanf("%d %d", &inicio, &fim);

    printf("Agora escolha um MULTIPLO dentre os numeros ecolhido(inicio e fim): ");
    scanf("%d", &k);

    for(int i = inicio; i <= fim; i++){ // Aqui "i" é cada número do intervalo
        if(i % k == 0){ // i % k calcula o resto da divisão de i por k. Se o resto for 0, significa que i é múltiplo de k, então mostra "i"
            printf("%d ", i);
        }
    }
}