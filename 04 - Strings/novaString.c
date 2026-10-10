/*
Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.
Nota: em s3, não devem existir caracteres
repetidos.*/

#include <stdio.h>
#include <string.h>
#define TAM 10

void nova(char s1[], char s2[], char s3[])
{
    int i, j, k = 0, aux, repetido;
    
    for (i = 0; s1[i] != '\0'; i++)
    {
        aux = 0;
        
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                aux = 1;
            }
        }
        
        repetido = 0;
        
        for (j = 0; j < k; j++)
        {
            if (s1[i] == s3[j]) 
            {
                repetido = 1; 
            }
        }
        
        if (aux == 0 && repetido == 0) 
        { 
            s3[k] = s1[i]; 
            k++; 
        }
    }
    
    s3[k] = '\0';
}

void main()
{
    char s1[TAM] = {"banana"}, s2[TAM] = {"brutal"}, s3[TAM];
    
    nova(s1, s2, s3);
    
    puts(s1);
    printf("\n");
    
    puts(s2);
    printf("\n");
    
    puts(s3);
    printf("\n");
}

