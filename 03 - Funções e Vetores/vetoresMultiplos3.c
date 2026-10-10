/*
Elaborar uma função que gere um vetor contendo os 30 primeiros números múltiplos de 3*/
 
#include <stdio.h>
 
#define TAM 30
 
void multiplosDeTres(int vetor[], int tamanho)
{
	int i;
   
    for (i = 0; i < tamanho; i++)
	{
    	vetor[i] = i*3;
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
	int vetor[TAM];
   
    //chamando funcao
	multiplosDeTres(vetor, TAM);
   
    printf ("vetor:\n");
	exibirVetor(vetor, TAM);
}
 

