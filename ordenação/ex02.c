#include <stdio.h>

// Método de ordenação Bubble Sort
void bsort(int vet[], int t)
{
  int i,j,k=0;    
  
  for (i=0;i<t-1;i++)
  {
    for (j=0;j<t-(i+1);j++)
    {
        if (vet[j] > vet[j+1])
        {
          k=vet[j];
          vet[j]=vet[j+1];
          vet[j+1]=k;
        }
    }     
  }
}

int main(){
    int v[10];
    int i;
    
    //Entrada dos dados
    for(i=0; i<10; i++)
    {
        printf("Entre com um numero da posicao %d do vetor: ", i);
        scanf("%d", &v[i]);
    }
    
    //Chama o método (procedimento) de ordenação do vetor
    bsort(v, 10);
    
    //Apresentar os dados ordenados
    printf("\n\nNúmeros ordenados:\n\n");
    for(i=0; i<10; i++)
        printf("%d\n", v[i]);

    return 0;
}