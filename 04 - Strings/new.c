/*
Desenvolver uma função, em C, que, dada uma string s e dada uma posição p desta string, crie duas novas strings: s1 com os caracteres de s das posições 0 a p-1; e s2 com os caracteres de s da posição p à última.
Nota: Caso p seja uma posição inválida, a função deverá retornar o valor 0; caso contrário,
procederá com a criação das duas strings e retornará o valor 1.*/

#include <stdio.h>
#include <string.h>
#define TAM 20

int dividir(char s[], char s1[], char s2[], int p)
{
    int i, j, tamanho;
    tamanho = strlen(s);
    
    //verificando
    if ((p >= tamanho) || (p < 0)){
        return 0;
    }
    else
    {
        for (i = 0; i < p; i++){
            s1[i] = s[i];
        }
        s1[i] = '\0';
        
        for(i = p, j = 0; i < tamanho; i++, j++){
            s2[j] = s[i];
        }
        s2[j] = '\0';
    }
    
    return 1;
    
    
}

void main()
{
    char s[TAM] = {"algoritmo"}, s1[TAM], s2[TAM];
    int p, resul;
    
    //exibindo string inicial
    puts(s);
    
    printf("\ndigite o valor de p: ");
    scanf ("%d", &p);
    
    resul = dividir(s, s1, s2, p);
    
    if(resul == 1){
        //exibindo as outras duas strings
        printf("\nstring 1:\n");
        puts(s1);
        
        printf("\nstring 2:\n");
        puts(s2);
    } else {
        printf ("p foi uma posicao invalida/\n");
    }
    
}

