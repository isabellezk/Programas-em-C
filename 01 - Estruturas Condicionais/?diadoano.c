/*Fazer um algoritmo que determine a ordem de uma data (dia e mês) no ano.
Exemplos:
01/01 - 1º dia do ano
03/02 - 34º dia do ano*/

#include <stdio.h>

int main()
{
    int dia, mes;

    printf ("digite a data (dia e mes): ");
    scanf ("%d %d", &dia, &mes);

    switch (mes)
    {
    case 1:
        printf ("\n%d° dia do ano\n", dia);
        break;
    case 2:
        printf ("\n%d° dia do ano\n", 31 + dia);
        break;
    case 3:
        printf ("\n%d° dia do ano\n", 59 + dia);
        break;
    case 4:
        printf ("\n%d° dia do ano\n", 90 + dia);
        break;
    case 5:
        printf ("\n%d° dia do ano\n", 120 + dia);
        break;
    case 6:
        printf ("\n%d° dia do ano\n", 151 + dia);
        break;
    case 7:
        printf ("\n%d° dia do ano\n", 181 + dia);
        break;
    case 8:
        printf ("\n%d° dia do ano\n", 212 + dia);
        break;
    case 9:
        printf ("\n%d° dia do ano\n", 243 + dia);
        break;
    case 10:
        printf ("\n%d° dia do ano\n", 273 + dia);
        break;
    case 11:
        printf ("\n%d° dia do ano\n", 304 + dia);
        break;
    case 12:
        printf ("\n%d° dia do ano\n", 334 + dia);
        break;
    default:
        break;

    }
}


