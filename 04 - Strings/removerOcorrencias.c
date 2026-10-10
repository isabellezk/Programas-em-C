/*
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.*/

#include <stdio.h>
#include <string.h>
#define TAM 10

void remover(char s[], char c)
{
    int i = 0, j = 0;
    
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
        
        i++;
    }
    s[j] = '\0';
}

void main()
{
    char s[TAM] = {"banana"};
    char c;
    
    puts(s);
    
    printf("\ndigite o caracter q vc quer remover: ");
    scanf (" %c", &c);
    
    remover(s, c);
    
    printf ("\n");
    puts(s);
}

