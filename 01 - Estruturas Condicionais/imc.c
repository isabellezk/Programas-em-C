/*O IMC (Índice de Massa Corporal) é um critéro da Organização Mundial de Saúde
para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é: IMC = peso / altura2
Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:*/

#include <stdio.h>

int main()
{
    float imc, peso, altura;

    printf ("digite seu peso e sua altura: ");
    scanf ("%f %f", &peso, &altura);

    imc = peso/(altura*altura);

    if (imc < 18.5)
    {
        printf ("\ncondicao: abaixo do peso\n");
    } else if (imc < 25 )
    {
        printf ("\ncondicao: peso ideal\n");
    } else if (imc < 30)
    {
        printf ("\ncondicao: sobrepeso\n");
    } else if (imc < 35)
    {
        printf ("\ncondicao: obesidade grau I\n");
    } else if (imc < 40)
    {
        printf ("\ncondicao: obesidade grau II\n");
    } else
    {
        printf ("\ncondicao: obesidade grau III\n");
    }
}*/


