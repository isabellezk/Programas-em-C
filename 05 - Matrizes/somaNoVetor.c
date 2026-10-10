/*
Implementar uma função que, dada uma matriz Mm×n, gere um vetor V de tamanho n, onde
cada elemento do vetor consiste na soma dos elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda coluna de M, e assim por diante.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetsoma(int l, int c, int matriz[l][c], int vetor[], int tamanho)
{
    int i, j, soma;
    
    for (i = 0; i < c; i++)
    {
        //zerando a soma
        soma = 0;
        
        for (j = 0; j < l; j++)
        {
            soma+=matriz[j][i];
        }
        
        vetor[i] = soma;
    }
}

void exibirMatriz(int l, int c, int matriz[l][c])
{
    int i, j;
    
    printf ("elementos da matriz: \n\n");
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf ("%d ", matriz[i][j]);
        }
        
        printf ("\n");
    }
}

void preencherMatriz(int l, int c, int matriz[l][c], int limite)
{
    int i, j;
    
    srand(time(NULL));
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            matriz[i][j] = rand()%limite;
        }
    }
}

void exibirVetor(int vetor[], int tamanho)
{
    int i;
    
    printf ("\nvetor:\n");
    
    for(i = 0; i < tamanho; i++)
    {
        printf ("%d ", vetor[i]);
    }
}

void main()
{
    int m[5][5];
    int n, vetor[5];
    
    preencherMatriz(5, 5, m, 10);
    exibirMatriz(5, 5, m);
    
    vetsoma(5, 5, m, vetor, 5);
    exibirVetor(vetor, 5);
    
}


