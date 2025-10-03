#include <stdio.h>

int main(){
    int v1[10];
    int v2[10];
    int v3[20];
    int i;

    //Entrada de dados do V1
    for(i=0; i<10; i++){
        printf("Entre com o valor do V1 %d:", i);
        scanf("%d", &v1[i]);
    }

    //Entrada de dados do V2
    for(i=0; i<10; i++){
        printf("Entre com o valor do V2 %d:", i);
        scanf("%d", &v2[i]);
    }

    //Aqui estou copiando v1 para as 10 primeiras posições da v3
    for(i=0; i<10; i++){
        v3[i] = v1[i];
    }

    //Aqui estou copiando v2 para as próximas 10 posições
    for(i=0; i<10; i++){
        v3[i+10] = v2[i];
    }

    //Mostrando os 20 elementos na ordem
    for(i=0; i<20; i++){
        printf("%d ", v3[i]);
    }
}