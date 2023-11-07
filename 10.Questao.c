#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1;
    int numero2;
    int resultado;
    int opcao;

    printf("Digite o 1° numero: \n");
    scanf("%d", &numero1);

    printf("Digite o 2° numero: \n");
    scanf("%d", &numero2);

    printf("Digite o número para opcao de cálculo: \n");
    printf ("1 - Soma \n");
    printf ("2 - Subtração \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("Resultado: %d", resultado);
        break;
    case 2:
        resultado = numero1 - numero2;
        printf("Resultado: %d", resultado);
        break;

    default:
        printf("opção inválida");
        break;
    }

    return 0;
}