/*
Faça uma função que, dada uma matriz Mm×n de
reais, gere a matriz Mt', sua transposta.*/

#include <stdio.h>
#define TAM 3

void transposta(float matriz[][TAM], float matrizTransposta[][TAM])
{
    int i, j;
    
    for (i = 0; i < TAM; i++){
        
        for (j = 0; j < TAM; j++){
            
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
}

void exibirMatriz(float matriz[][TAM])
{
    int i, j;
    
    for (i = 0; i < TAM; i++) 
    {
        for (j = 0; j < TAM; j++) 
        {
            printf ("%f ", matriz[i][j]);
        }
        
        printf ("\n");
    }
}

void main()
{
    float matriz[TAM][TAM] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    float matrizTransposta[TAM][TAM];
    
    //exibindo matriz
    printf ("matriz:\n");
    exibirMatriz(matriz);
    
    //chamando a função para alterar
    transposta(matriz, matrizTransposta);
    
    //exibindo matriz transposta
    
    printf ("matriz transposta:\n");
    exibirMatriz(matrizTransposta);
}


