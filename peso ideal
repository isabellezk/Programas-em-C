/*Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
para homens:
(72.7*h)-58
para mulheres:  (62.1*h)-44.7*/

#include <stdio.h>

int main()
{
    float altura, pesoideal;
    char genero;

    printf ("digite seu genero (f ou m) e sua altura: ");
    scanf ("%c %f", &genero, &altura);

    if (genero == 'f' || genero == 'F')
    {
        printf ("\nseu peso ideal eh %.2f\n", (62.1*altura) - 44.7);
    }
    else if (genero == 'm' || genero == 'M')
    {
        printf ("\nseu peso ideal eh %.2f\n", (72.7*altura) - 58);
    }
}

