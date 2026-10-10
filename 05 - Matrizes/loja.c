/*
Considere uma loja que mantém em uma matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma matriz de 12 linhas (uma por mês) e 10 colunas (10 funcionários).  Pede-se o desenvolvimento de uma função para cada item abaixo:
a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano;
d. Determinar o mês com maior índice de vendas;
e. Determinar o funcionário que menos vendeu durante o ano.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculoTotal(int l, int c, int matriz[l][c])
{
    int i, j, soma = 0;
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            soma+=matriz[i][j];
        }
    }
    
    return soma;
}

int totalFuncionario(int l, int c, int matriz[l][c], int funcionario)
{
    int i, total = 0;
    
    for (i = 0; i < l; i++)
    {
        total += matriz[i][funcionario];
    }
    
    return total;
}

int totalVendidoMes(int l, int c, int matriz[l][c], int mes)
{
    int i, j, total = 0;
    
    for (j = 0; j < c; j++)
    {
        total+=matriz[mes-1][j];
    }
    
    return total;
}

int funcionarioMenos(int l, int c, int matriz[l][c])
{
    int menor = totalFuncionario(l, c, matriz, 0);
    int j, menosVendeu = 0, total;
    
    for (j = 1; j < c; j++)
    {
        total = totalFuncionario(l, c, matriz, j);
        
        if (total < menor)
        {
            menor = total;
            menosVendeu = j;
        }
    }
    
    return menosVendeu;
    
}

int maiorIndice(int l, int c, int matriz[l][c])
{
    int maior = totalVendidoMes(l, c, matriz, 1);
    int i, mesMaior = 1, total;
    
    for (i = 2; i <= l; i++)
    {
        total = totalVendidoMes(l, c, matriz, i);
    
        if (total > maior)
        {
            maior = total;
            mesMaior = i;
        }
    }   
    
    return mesMaior;
}

void exibirMatriz(int l, int c, int matriz[l][c])
{
    int i, j;
    
    printf ("elementos da matriz: \n\n");
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf ("%d ", matriz[i][j]);
        }
        
        printf ("\n");
    }
}

void preencherMatriz(int l, int c, int matriz[l][c], int limite)
{
    int i, j;
    
    srand(time(NULL));
    
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            matriz[i][j] = rand()%limite;
        }
    }
}

void main()
{
    int matriz[12][10], mes, funcionario;
    int resul1, resul2, resul3, resul4, resul5;
    
    //preenchendo e exibindo matriz
    preencherMatriz(12, 10, matriz, 30);
    exibirMatriz(12, 10, matriz);
    
    //a. Calcular o total vendido durante o ano;
    resul1 = calculoTotal(12, 10, matriz);
    printf ("\nTotal vendido durante o ano: %d\n", resul1);
    
    //b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;
    printf ("\nDigite um mes: ");
    scanf ("%d", &mes);
    resul2 = totalVendidoMes(12, 10, matriz, mes);
    printf ("Total vendido nesse mes: %d\n", resul2);
    
    //c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano;
    printf ("\nDigite um funcionario (de 0 a 9): ");
    scanf ("%d", &funcionario);
    resul3 = totalFuncionario(12, 10, matriz, funcionario);
    printf ("Total vendido por esse funcionario no ano: %d\n", resul3);
    
    //d. Determinar o mês com maior índice de vendas;
    resul4 = maiorIndice(12, 10, matriz);
    printf ("\nMes com maior indice de vendas: %d\n", resul4);
    
    //e. Determinar o funcionário que menos vendeu durante o ano.
    resul5 = funcionarioMenos(12, 10, matriz);
    printf ("\nFuncionario que menos vendeu durante o ano: %d\n", resul5);
}

