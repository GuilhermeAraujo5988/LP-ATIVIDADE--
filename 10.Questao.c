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

    printf("Digite o 1� numero: \n");
    scanf("%d", &numero1);

    printf("Digite o 2� numero: \n");
    scanf("%d", &numero2);

    printf("Digite o n�mero para opcao de c�lculo: \n");
    printf ("1 - Soma \n");
    printf ("2 - Subtra��o \n");
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
        printf("op��o inv�lida");
        break;
    }

    return 0;
}