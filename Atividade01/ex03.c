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

    for(i=0; i<10; i++){
        printf("Entre com o numero %d do vetor: ", i+1);
        scanf("%d", &v[i]);
    }

    // Ordena o vetor
    bsort(v, 10);

    // Exibe o vetor ordenado
    printf("Vetor ordenado em ordem crescente: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}