/*
Desenvolver uma função que receba um vetor de inteiros e multiplique todos os elementos por 2*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define TAM 20
 
void dobrar(int vetor[], int tamanho)
{
	int i;
   
    for (i = 0; i < tamanho; i++)
	{
    	vetor[i]*=2;
	}
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
   
    for (i = 0; i < tamanho; i++){
    	printf ("%d ", vetor[i]);
	}
   
    printf ("\n\n");
}
 
void main()
{
	int vetor[TAM];
   
    //preenchendo e exibindo vetor
	preencherVetor(vetor, TAM);
	printf ("vetor original:\n");
	exibirVetor(vetor, TAM);
   
    //chamando função
	dobrar(vetor, TAM);
   
    //exibindo vetor dobrado
	printf ("vetor dobrado:\n");
	exibirVetor(vetor, TAM);
}

