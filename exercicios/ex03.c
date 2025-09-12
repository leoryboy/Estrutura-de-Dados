//Exercício 3: Conversor de temperatura (repetições)

#include <stdio.h>

int main(){
    int n;
    double celsius; //double porque o número é real
    double fahrenheit;

    printf(" * CONVERSOR DE TEMPERATURA(REPETICOES) *\n Digite um numero inteiro(n): ");
    scanf("%d", &n);

    //Inicialização — int i = 1; | (começa em 1 porque quer numerar as temperaturas: 1ª, 2ª, ...)
    //Condição — i <= n;         | (Se i <= n for true (verdadeiro), entra no corpo do loop; se for false, sai do loop.)
    //Incremento — i++           | (Executado após o corpo do loop, no fim de cada iteração. Depois do incremento o fluxo volta a testar a condição i <= n novamente.)
    for(int i = 1; i <= n; i++){
        printf("Digite a temperatura %d em Celsius (ou -999 para sair): ", i); //%d é o marcador para um inteiro; que é substituido pelo valor i
        scanf("%lf", &celsius);   // "%lf" porque a variável é double, caso fosse float seria "%f"

        //Verifica se o usuário quer encerrar
        if(celsius == -999){
            printf("Encerrando o programa\n");
            break; // Sai do FOR
        }
        
        fahrenheit = celsius * 1.8 + 32;
        printf("Celsius: %.2f Fahrenheit: %.2f\n\n", celsius, fahrenheit);
    }
    return 0;
}