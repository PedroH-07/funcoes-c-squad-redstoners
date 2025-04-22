#include <stdio.h>

/*
Função de boas-vindas para o usuário
Função para calcular a média
Função para exibir o resultado
*/
void boasVindas(char nome[]);
float calcularMedia(float n1, float n2, float n3);
void exibirResultado(float media);

int main()
{
    char nome[50];
    float nota1, nota2, nota3, media;

    // Receber nome do Aluno
    printf("Insira o seu nome: ");
    scanf("%49s", nome);
    boasVindas(nome);

    // Receber as 3 notas do Aluno
    printf("Insira as suas 3 notas (separadas por espaço): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    // Cálculo da média
    media = calcularMedia(nota1, nota2, nota3);

    // Exibição do resultado
    exibirResultado(media);

    return 0;
}

void boasVindas(char nome[])
{
    printf("\nBem-vindo(a), %s! Vamos calcular sua média!\n", nome);
}

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3; // Cálculo da média
}

void exibirResultado(float media)
{
    printf("\nSua média foi: %.2f\n", media);

    // Verificar situação do aluno
    if (media >= 6.0)
    {
        printf("Você foi aprovado!\n");
    }
    else if (media >= 4.0)
    {
        printf("Você está de recuperação.\n");
    }
    else
    {
        printf("Você foi reprovado!\n");
    }
}