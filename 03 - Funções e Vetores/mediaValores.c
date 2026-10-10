/*Implementar uma função que receba um vetor de reais e calcule a média dos valores armazenados*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int mediaValores(float vetor[], int tamanho)
{
    int i, soma = 0, media;
    
    for (i = 0; i < tamanho; i++)
    {
        soma+=vetor[i];
    }
    
    media = soma / tamanho;
    
    return media;
}

void preencherVetor(float vetor[], int tamanho)
{
    int i;
    
    srand(time(NULL));
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%100;
    }
}

void exibirVetor(float vetor[], int tamanho)
{
    int i;
    
    for (i = 0; i < tamanho; i++)
    {
        printf ("%.1f ", vetor[i]);
    }
    
    printf ("\n\n");
}

void main()
{
    float vetor[TAM], media;
    
    preencherVetor(vetor, TAM);
    
    printf ("vetor:\n");
    exibirVetor(vetor, TAM);
    
    //chamando a função
    media = mediaValores(vetor, TAM);
    
    printf ("media dos valores do vetor: %.2f :)\n", media);
}



