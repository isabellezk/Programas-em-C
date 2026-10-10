/*
Fazer uma função que remova todos os numeros repetidos de um vetor
Exemplo:
A = {1, 2, 2, 3, 1, 4} --> {1, 2, 3, 4}*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define TAM 10
 
void removerRep(int vetor[], int *tamanho)
{
	int i, j, k;
   
    for (i = 0; i < (*tamanho); i++)
	{
    	for (j = i+1; j < (*tamanho); j++)
    	{
        	if (vetor[i] == vetor[j])
        	{
            	for (k = j+1; k < (*tamanho); k++)
            	{
                	vetor[k-1] = vetor[k];
            	}
            	(*tamanho)--;
            	j--;
        	}
    	}
	}
}
 
void preencherVetor(int vetor[], int tamanho)
{
	int i;
   
    srand(time(NULL));
	for (i = 0; i < tamanho; i++)
	{
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
	int tamanho = TAM;
	int vetor[tamanho];
   
    //preenchendo e exibindo vetor
	preencherVetor(vetor, tamanho);
   
    printf ("vetor:\n");
	exibirVetor(vetor, tamanho);
   
    //chamando funcao e exibindo
	removerRep(vetor, &tamanho);
   
    printf ("vetor sem as repeticoes:\n");
	exibirVetor(vetor, tamanho);
}
 

