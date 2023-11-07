#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int opcao;

    printf("----------MENU---------- \n");
    printf("Digite um numero de acordo com sua escolha: \n");
    printf("1 - Novo jogo \n");
    printf("2 - Carregar jogo \n");
    printf("3 - Configuraçoes \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciar novo jogo");
        break;
    case 2:
        printf("Carregando novo jogo");
        break;
    case 3:
        printf("Configurações do jogo");
        break;

    default:
        printf("opção invalida");
        break;
    }

    return 0;
}