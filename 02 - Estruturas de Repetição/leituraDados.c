/*Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/

#include <stdio.h>

int leituraDados(float *maior)
{
    float n;
    int cont = 0;
    *maior = 0;

    do
    {
        printf ("\ndigite um numero: ");
        scanf ("%f", &n);

        if (n != 0){
            if (n > *maior){
                *maior = n;
            }
            cont++;
        }
    } while (n != 0);

    return cont;
}

void main()
{
    float maior;
    int resul;

    resul = leituraDados(&maior);

    printf ("\n\n\nquantidade de valores digitados: %d", resul);
    printf ("\nmaior valor digitado: %.2f\n", maior);
}


