#include <stdio.h>

int main(){
    int v[10];
    int i;
    int maior;

    for(i=0; i<10; i++){
        printf("Entre com os numeros %d: ", i+1);
        scanf("%d", &v[i]);
    }

    maior = v[0]; // começa assumindo que o primeiro é o maior

    for(i=1; i<10; i++){
        if(v[i] > maior){
            maior = v[i]; // atualiza se achar um maior
        }
    }
    printf("O maior elemento eh: %d\n", maior);
    return 0;
}