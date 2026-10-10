/*
Desenvolver uma função que, dada uma string s,
crie uma substring que inicie na posição p de s e
contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.*/

#include <stdio.h>
#include <string.h>
#define TAM 11

void substring(char s[], char sub[], int p, int n)
{
    int i = p, j = 0;
    
    if ((n <= 0) || (p < 0) || (p >= strlen(s))){
        sub[0] = '\0';
    }
    else{
        while ((j < n) && s[i] != '\0'){
            sub[j] = s[i];
            i++;
            j++;
        }
        sub[j] = '\0';
    }
}

void main()
{
    char s[TAM] = {"computador"}, sub[TAM];
    int p, n;
    
    puts(s);
    
    printf ("\ndigite o valor de p e n: ");
    scanf ("%d %d", &p, &n);
    
    substring(s, sub, p, n);
    
    printf ("\n");
    puts(sub);
}

