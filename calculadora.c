#include <stdio.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main()
{
    int opcao, num1, num2;

    do
    {
        printf("\n========== Calculadora ==========\n");
        printf("1. Soma\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");

        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            switch (opcao)
            {
            case 1:
                printf("\nResultado: %d + %d = %d\n", num1, num2, somar(num1, num2));
                break;
            case 2:
                printf("\nResultado: %d - %d = %d\n", num1, num2, subtrair(num1, num2));
                break;
            case 3:
                printf("\nResultado: %d * %d = %d\n", num1, num2, multiplicar(num1, num2));
                break;
            case 4:
                if (num2 == 0)
                {
                    printf("\nErro: Divisão por zero!\n");
                }
                else
                {
                    printf("\nResultado: %d / %d = %.2f\n", num1, num2, dividir(num1, num2));
                }
                break;
            }
        }
        else if (opcao != 5)
        {
            printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 5);

    printf("\nCalculadora encerrada. Até logo!\n");
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
        return 0;
    }
    return (float)a / b;
}