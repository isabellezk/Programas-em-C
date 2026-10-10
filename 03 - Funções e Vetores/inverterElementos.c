/*QUESTÃO 07
Fazer uma função que receba um vetor de inteiros e inverta a ordem dos elementos
Exemplo:
A = {1, 2, 3, 4} --> B = {4, 3, 2, 1}*/
 
#include <stdio.h>
 
void inverter(int vetor[], int tamanho)
{
	int i, aux;
 
	for (i = 0; i < tamanho / 2; i++)
	{
    	aux = vetor[i];
    	vetor[i] = vetor[tamanho - 1 - i];
    	vetor[tamanho - 1 - i] = aux;
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
	int vetor[5] = {1, 2, 3, 4, 5};
   
    //exibindo vetor
	printf ("vetor original:\n");
	exibirVetor(vetor, 5);
   
    //chamando função
	inverter(vetor, 5);
   
    //exibindo vetor invertido
	printf ("vetor invertido:\n");
	exibirVetor(vetor, 5);
}
 

