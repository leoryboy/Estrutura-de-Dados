#include <stdio.h>

/*
Desvio condicional (if - else) 
É quando o programa toma uma decisão com base em uma condição lógica (true ou false)
*/

int main() {

    /*
    if(condicão lógica){ sempre o if testa o valor verdadeiro primeiro
        <então faça alguma coisa>
    }else{ // a condição NÃO é verdadeira (falsa)
        <então faça outra coisa>
    }
        Operadores condicionais (condição)
        > maior
        < menor
        >= maior ou igual
        <= menor ou igual
        == igual
        != diferente
    */
   //int idade = 17;
   int idade;
   printf("informe a sua idade: ");
   scanf("%d", &idade); // ler a idade a partir do teclado

   if(idade >= 18){
    printf("Parabens voce eh MAIOR de idade."); //o resultado 18 >= 18 é verdade
   }else{
    printf("Opa! voce ainda eh MENOR de idade."); // o resultado menor de 18 é falso
   }
    return 0;
}
