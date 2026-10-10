/*
Dada uma string s, desenvolver uma função que
determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.*/

#include <stdio.h>
#include <string.h>
#define TAM 15

int palindromo(char s[])
{
    int i, j = strlen(s) - 1;

    for (i = 0; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }

    return 1;

}

int main()
{
    char s[TAM] = {"arara"};
    int resul;

    resul = palindromo(s);

    if (resul == 1){
        printf ("%s eh um palindromo :)\n", s);
    } else if (resul == 0) {
        printf ("%s nao eh um palindromo :(\n", s);
    }
}

