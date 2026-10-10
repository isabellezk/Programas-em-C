/*
Fazer uma função que, dada uma matriz Mn×n,
determine se ela é simétrica.*/

#include <stdio.h>
#define TAM 3

void transposta(int matriz[TAM][TAM], int matrizTransposta[TAM][TAM])
{
    int i, j;
    
    for (i = 0; i < TAM; i++){
        
        for (j = 0; j < TAM; j++){
            
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
}

int simetrica(int matriz[TAM][TAM])
{
    int i, j, matriz2[TAM][TAM];
    
    transposta(matriz, matriz2);
    
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] != matriz2[i][j])
            {
                return 0;
            }
        }
    }
    
    return 1;
    
}


void exibirMatriz(int matriz[TAM][TAM])
{
    int i, j;
    
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf ("%d ", matriz[i][j]);
        }
    
        printf ("\n");
    }
}

void main()
{
    int matriz[TAM][TAM] = {{1, 2, 3},{2, 5, 6}, {3, 6, 9}};
    int matrizTransposta[TAM][TAM];
    int resul;
    
    //exibindo matriz
    printf ("matriz:\n");
    exibirMatriz(matriz);
    
    //chamando função
    resul = simetrica(matriz);
    
    //exibindo resultado
    if (resul == 1){
        printf ("\nessa matriz eh simetrica :)\n");
    } 
    else {
        printf ("\nessa matriz nao eh simetrica :(\n");
    }
    
}


