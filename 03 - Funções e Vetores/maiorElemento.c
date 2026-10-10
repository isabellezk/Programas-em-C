/*
Fazer uma função que determine o maior elemento presente em um vetor de inteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int maiorElemento(int vetor[], int tamanho)
{
    int i, maior = vetor[0];
    
    for(i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    
    return maior;
}

void preencherVetor(int vetor[], int tamanho)
{
    int i;
    
    srand(time(NULL));
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%100;
    }
}

void exibirVetor(int vetor[], int tamanho)
{
    int i;
    
    for (i = 0; i < tamanho; i++)
    {
        printf ("%d ", vetor[i]);
    }
    
    printf ("\n\n");
}

void main()
{
    int vetor[TAM], maior;
    
    //prencher e exibir vetor
    preencherVetor(vetor, TAM);
    
    printf ("vetor:\n");
    exibirVetor(vetor, TAM);
    
    //chamando função e exibindo resultado
    maior = maiorElemento(vetor, TAM);
    printf ("o maior elemento desse vetor eh %d :)\n", maior);
    
    
}


