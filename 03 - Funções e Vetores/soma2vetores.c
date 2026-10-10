/*
Fazer uma função que receba dois vetores de inteiros e gere um terceiro
vetor contendo a soma dos elementos de mesma posição
Exemplo:
A = {1, 2, 3}
B = {4, 5, 6}
C = {5, 7, 9}*/
 
#include <stdio.h>
#define TAM 10
 
void somaElementos(int vetorA[], int tamanho, int vetorB[], int vetorC[])
{
	int i, j;
   
    for (i = 0; i < tamanho; i++)
	{
    	for (j = 0; j < tamanho; j++)
    	{
        	vetorC[i] = vetorA[i] + vetorB[i];
    	}
	}
}
 
void exibirVetor(int vetor[], int tamanho)
{
	int i;
   
    for (i = 0; i < tamanho; i++){
    	printf ("%d ", vetor[i]);
	}
   
    printf ("\n\n");
}
 
void main()
{
	int vetorA[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int vetorB[TAM] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int vetorC[TAM];
   
    //exibindo vetores a e B
	printf ("vetor A:\n");
	exibirVetor(vetorA, TAM);
   
    printf ("vetor B:\n");
	exibirVetor(vetorB, TAM);
   
    //chamando a função
	somaElementos(vetorA, TAM, vetorB, vetorC);
   
    //exibindo vetor novo
	printf ("vetor C (soma dos elementos de mesma posicao dos vetores A e B):\n");
	exibirVetor(vetorC, TAM);
   
}

