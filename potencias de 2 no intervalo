/*Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas. */

#include <stdio.h>

int potencias(int a, int b, int *maior)
{
    int i, potencia = 1, contPot = 0;

    *maior = 0;

    for (i=a; i <= b; i++){
        potencia *= 2;

        if (potencia >= a && potencia <= b){
            contPot++;

            if (potencia > *maior){
                *maior = potencia;
            }
        }
    }

    return contPot;
}


int main()
{
    int a, b, maior, resul;

    printf ("digite o intervalo (a e b): ");
    scanf ("%d %d", &a, &b);

    resul = potencias(a, b, &maior);

    printf ("\n\nnumero de potencias de dois existentes no intervalo: %d", resul);
    printf("\nmaior potencia encontrada: %d :)\n", maior);

}

