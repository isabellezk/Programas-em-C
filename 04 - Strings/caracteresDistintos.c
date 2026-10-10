/*
Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.*/

#include <stdio.h>
#include <string.h>
#define TAM 15

int quantCaracter(char s[])
{
    int i, j, cont = 0, aux;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        aux = 0;
    
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                aux = 1;
                break;
            }
        }
    
        if (aux == 0)
        {
            cont++;
        }
    }
    
    return cont;
}

void main()
{
    char s[TAM] = {"batatinha"};
    int resul;
    
    resul = quantCaracter(s);
    
    puts(s);
    printf ("\nquantidade de caracteres distintos em s: %d :)\n", resul);
}

