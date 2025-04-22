#include <stdio.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main()
{
    int opcao, num1, num2;

    printf("==========Calculadora==========\n");
    printf("1. Soma\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Sair");

    printf("Escolha uma opção");
    scanf("%d", &opcao);

    if (opcao != 0)
    {
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
    }

    return 0;
}

int somar(int a, int b)
{
    return a + b;
}

int subtrair(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b == 0)
    {
        printf("Erro de divisão por zero\n");
        return 0;
    }

    return (float)a / b;
}