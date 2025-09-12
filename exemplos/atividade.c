#include <stdio.h>

int main(){

    int n1;
    int n2;
    int sum;
    int sub;

    printf("Digite o primerio numero (n1): ");
    scanf("%d", &n1);

    printf("Digite o segundo numero (n2): ");
    scanf("%d", &n2);

    sum = n1 + n2;
    sub = n2 - n1;

    if(n1 > n2){
        printf("A soma de %d e %d = %d\n", n1, n2, sum);
    }else{
        printf("A subtracao de %d e %d = %d\n", n2, n1, sub);
    }

    return 0;
}