#include <stdio.h>
#include <windows.h>

void ContagemRegressiva(int inicio)
{

    int i = inicio;
    for (i; i >= 0; i--)
    {
        printf("%d\n", i);
        Sleep(1000);
    }
}

int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);

    ContagemRegressiva(numero);
    return 0;
}