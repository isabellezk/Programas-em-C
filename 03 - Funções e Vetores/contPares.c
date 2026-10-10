/*Elaborar uma função que conte quantos números pares existem em um vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int pares(int vetor[], int tamanho)
{
    int i, cont = 0;
    
    for(i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cont++;
        }
    }
    
    return cont;
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
    int vetor[TAM], resul;
    
    //prencher e exibir vetor
    preencherVetor(vetor, TAM);
    
    printf ("vetor:\n");
    exibirVetor(vetor, TAM);
    
    //chamando função e exibindo resultado
    resul = pares(vetor, TAM);
    printf ("a quantidade de numeros pares nesse vetor eh %d :)\n", resul);
    
    
}


