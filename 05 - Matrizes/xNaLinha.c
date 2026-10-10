/*
Desenvolver uma função que, dada uma matriz
Mm×n, determine se um número X se encontra
na linha L da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int encontra(int l, int c, int matriz[l][c], int x, int linha)
{
    int i;
    
    for (i = 0; i < c; i++)
    {
        if (matriz[linha][i] == x)
        {
            return 1;
        }
    }
    
    return 0;
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

void main()
{
    int m[5][5];
    int x, resul, linha;
    
    preencherMatriz(5, 5, m, 10);
    exibirMatriz(5, 5, m);
    
    printf ("\ndigite o valor de x e o numero da linha: ");
    scanf ("%d %d", &x, &linha);
    
    resul = encontra(5, 5, m, x, linha);
    
    if (resul == 1)
    {
        printf("\n%d se encontra na linha %d da matriz :)\n", x, linha);
    } else {
        printf("\n%d nao se encontra na linha %d da matriz :(\n", x, linha);
    }
}



