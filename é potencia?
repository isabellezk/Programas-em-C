/*Fazer uma função que, dados dois números inteiros num1 e num2, determine se num2
é uma potência de num1.
Nota: apresentar a main chamando a função implementada.*/

#include <stdio.h>

int epotencia(int num1, int num2)
{
    int pot = 1;
    
    while (pot < num2)
    {
        pot*=num1;
    }
    
    if (pot == num2){
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    int num1, num2, resul;
    
    printf ("digite o valor de n1 e n2: ");
    scanf ("%d %d", &num1, &num2);
    
    resul = epotencia(num1, num2);
    
    if (resul == 1){
        printf ("\n\n%d eh potencia de %d :)\n", num2, num1);
    }
    else {
        printf ("\n\n%d nao eh potencia de %d :(\n", num2, num1);
    }
}


