//Exercício 2: Soma dos dois

#include <stdio.h>

int main(){
    int a, b;
    int soma;
    int diferenca;
    int produto;
    double quociente; //Número REAL

    printf(" * SOMA DOS DOIS *\n Digite o primeiro numero(A): ");
    scanf("%d", &a);

    printf("Digite o segundo numero(B): ");
    scanf("%d", &b);

    soma = a + b;
    diferenca = a - b;
    produto = a * b;
    quociente = (double) a / b; //(double) transforma o "a" em número real, e quando divide por "b", o resultado sera real.

    printf("Soma: %d + %d = %d\n", a, b, soma);
    printf("Diferenca: %d - %d = %d\n", a, b, diferenca);
    printf("Produto: %d * %d = %d\n", a, b, produto);
    
    if(b == 0){
        printf("Nao eh possivel dividir por ZERO");
    }else{
        printf("Quociente: %d / %d = %.2f", a, b, quociente); // %.2f mostra o resultado em duas casas decimais.
    }
    return 0;
}