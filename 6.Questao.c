#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Digite o número de acordo com a sua escolha \n");
    printf("1 - Camiseta \n");
    printf("2 - Calça \n");
    printf("3 - Sapato \n");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
        printf("1 - Camiseta \n");
        printf(" valor: R$35.00 \n");
        break;
    case 2:
        printf("2 - Calça \n");
        printf("valor: R$99.00 \n");
        break;
    case 3:
        printf("3 - Sapato \n");
        printf(" valor: R$150.00 \n");
        break;

    default:
        printf("Opção inválida");
        break;
    }

    return 0;
}