/*Desenvolver uma função que receba um vetor de inteiros e retorne a soma de todos os elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int somaElementos(int vetor[], int tamanho)
{
    int i, soma = 0;

    for (i = 0; i < tamanho; i++)
    {
        soma+=vetor[i];
    }
    
    return soma;
}

void preencherVetor(int vetor[], int tamanho)
{
    int i;
    
    srand(time(NULL));
    for (i = 0; i < tamanho; i++){
        vetor[i] = rand()%10;
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
    
    //preenchendo o vetor e exibindo
    preencherVetor(vetor, TAM);
    
    printf ("vetor: \n");
    exibirVetor(vetor, TAM);
    
    //chamando a função
    resul = somaElementos(vetor, TAM);

    //exibindo resultado
    printf ("a soma dos elementos do vetor eh %d", resul);
}

