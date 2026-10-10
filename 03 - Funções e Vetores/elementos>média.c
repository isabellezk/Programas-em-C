/*
Elaborar uma função que receba um vetor e informe quantos
elementos são maiores que a média do vetor*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
 
int maioresQueMedia(int vetor[], int tamanho)
{
	int i, soma = 0, cont = 0;
	float media;
   
    //fazendo a media do vetor
	for (i = 0; i < tamanho; i++)
	{
    	soma+=vetor[i];
	}
   
    media = (float)soma/tamanho;
   
    //percorrendo o vetor dnv e vendo se algum elemento eh maior q a media
	for (i = 0; i < tamanho; i++)
	{
    	if (vetor[i] > media)
    	{
        	cont++;
    	}
	}
   
    return cont;
}
 
void preencherVetor(int vetor[], int tamanho)
{
	int i;
   
    srand(time(NULL));
	for (i = 0; i < tamanho; i++){
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
	int vetor[TAM], resul;
   
    //preenchendo e exibindo vetor
	preencherVetor(vetor, TAM);
	printf ("vetor:\n");
	exibirVetor(vetor, TAM);
   
    //chamando a função
	resul = maioresQueMedia(vetor, TAM);
   
    //resultado
	printf ("quantidade de elementos maiores que a media: %d\n", resul);
}
 


