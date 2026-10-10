/*
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.*/

#include <stdio.h>
#define TAM 7

//função strlen - mostra o tamanho da string
int strlenfake(char palavra[], int tamanho)
{
    int i = 0;
    
    while(palavra[i] != '\0')
    {
        i++;
    }
    
    return i;
}

int main()
{
    char palavra[TAM] = {"batata"};
    int resul;
    
    resul = strlenfake(palavra, TAM);
    
    printf ("o tamanho da string eh %d", resul);
    
}*/


//função strcpy - altera o conteudo de uma string
void strcpyfake(char s1[], char s2[])
{
    int i;
    
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    
    s1[i] = '\0';
}

int main()
{
    char s1[TAM] = {"preta"}, s2[TAM] = {"atena"};
    
    strcpyfake(s1, s2);
    
    printf ("%s\n", s1);
    printf ("%s\n", s2);
}


//função strcmp - compara se duas strings são iguais
int srtcmpfake(char s1[], char s2[])
{
    int i = 0;
    
    while((s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        {
            break;
        }
        
        i++;
    }
    
    if (s1[i] == s2[i]){
        return 0;
    }
    else if(s1[i] < s2[i]){
        return -1;
    }
}

int main()
{
    char s1[TAM] = {"batata"}, s2[TAM] = {"batata"};
    int resul;
    
    resul = srtcmpfake(s1, s2);
    
    if (resul == 0){
        printf ("as strings sao iguais!\n");
    } else {
        printf ("as strings sao diferentes\n");
    }
}

//função strcat - soma duas strings
void strcatfake(char s1[], char s2[])
{
    int i, j = srtlen(s1);
    
    for (i = 0; s2[i] != '\0'; i++, j++)
    {
        s1[j] = s2[i];
    }
    
    s1[j] = '\0';
}

int main()
{
    char s1[TAM] = {"batata"}, s2[TAM] = {" linda"};
    
    strcatfake(s1, s2);
    
    printf ("%s", s1);
}




