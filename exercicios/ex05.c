//Exercício 5: Média com critério de parada

#include <stdio.h>
#include <stdbool.h> // Biblioteca para definir o dado "booleano" e valores "true" "false"

int main(){
    double notas;
    int contador = 0; // Para contar quantas notas válidas foram digitadas
    double soma = 0; // Para acumular as notas
    double media;

    printf("  * MEDIA COM CRITERIO DE PARADA *\n ");

    while(true){
        printf("Digete suas notas (para sair digite um numero negativo): ");
        scanf("%lf", &notas); // %lf para ler valores reais do double
        if(notas < 0){ // Aqui o loop verifica se o valor digitado é negativo
            printf("Total de numero digitados: %d\n", contador); // Aqui mostra quantos número foram digitados pelo usuário
            break;
        }else{
            soma = soma + notas; // Aqui soma todas as notas validas e sempre começa no 0 (ex: 1ª nota: 8 "soma = 0 + 8 = 8" | 2ª nota: 7 "soma = 8 + 7 = 15")
        }
        contador++;
    }
    if(contador == 0){ // Mensagem de aviso caso o usuário digete um valor negativo de primeira
        printf("Nenhuma nota valida foi digitada!\n");
    }else{
        media = soma / contador;//Aqui eu divido a soma TOTAL das notas que é "soma", pelo número de notas validas que o "contador" contou. (ex: Média = 24 / 3 = 8)
        printf("Quantidade de notas: %d\n", contador);
        printf("Media: %0.2f\n", media);
    } 
}