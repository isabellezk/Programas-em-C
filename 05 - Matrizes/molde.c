/*
Desenvolver uma função que gere uma matriz
Mnn, nos moldes do exemplo apresentado a
seguir (que consiste em uma matriz de ordem 5)
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/

#include <stdio.h>
#define TAM 5

void matriz(int m[TAM][TAM])
{
    int i, j;
    
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            m[i][j] = i+j+1;
        }
    }
}

void exibirMatriz(int matriz[TAM][TAM])
{
    int i, j;
    
    printf ("elementos da matriz: \n\n");
    
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf ("%d ", matriz[i][j]);
        }
        
        printf ("\n");
    }
}

void main()
{
    int m[TAM][TAM];
    
    matriz(m);
    exibirMatriz(m);
    
}


