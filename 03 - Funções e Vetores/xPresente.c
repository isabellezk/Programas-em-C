/*
Criar uma função que receba um vetor e um número inteiro x, verificando se x está presente no vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int presente(int vetor[], int tamanho, int x)
{
    int i;
    
    for(i = 0; i < tamanho; i++)
    {
        if (vetor[i] == x)
        {
            return 1;
        }
    }
    
    return 0;
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
    int vetor[TAM], resul, x;
    
    //prencher e exibir vetor
    preencherVetor(vetor, TAM);
    
    printf ("vetor:\n");
    exibirVetor(vetor, TAM);
    
    //pedindo o x
    printf ("digite o valor de x: ");
    scanf ("%d", &x);
    
    //chamando função e exibindo resultado
    resul = presente(vetor, TAM, x);
    
    if (resul == 1){
        printf ("\n%d esta presente no vetor :)\n", x);
    } 
    else{
        printf ("\n%d nao esta presente no vetor :(\n", x);
    }
    
    
}


