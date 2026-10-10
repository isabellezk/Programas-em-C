/*Implementar uma função que, dado um vetor contendo números reais, determine o maior e o
segundo maior elementos.
Nota: considerar que não há repetição de elementos no vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void maiores(int vetor[], int tamanho, int *maior, int *segMaior)
{
    int i;

    *maior = vetor[0];
    *segMaior = vetor[0];

    for (i = 1; i < tamanho; i++)
    {
        if (vetor[i] > *maior)
        {
            *segMaior = *maior;
            *maior = vetor[i];
        }
        else if (vetor[i] > *segMaior)
        {
            *segMaior = vetor[i];
        }
    }
}

void preencherVetor(int vetor[], int tamanho)
{
    int i;
    
    srand(time(NULL));
    for (i = 0; i < tamanho; i++){
        vetor[i] = rand()%100;
    }
}

void exibirVetor(int vetor[], int tamanho)
{
    int i;
    
    for (i = 0; i < tamanho; i++){
        printf ("%d ", vetor[i]);
    }
    
    printf ("\n\n");
}

void main()
{
    int vetor[TAM];
    int maior, segMaior;

    //preenchendo vetor
    preencherVetor(vetor, TAM);
    
    //exibindo vetor
    exibirVetor(vetor, TAM);
    
    maiores(vetor, TAM, &maior, &segMaior);

    printf("maior: %d\n", maior);
    printf("segundo maior: %d\n", segMaior);

}

