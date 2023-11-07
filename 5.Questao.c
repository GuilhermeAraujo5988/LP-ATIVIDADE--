#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    printf("Digite um número de acordo com a sua preferência de idioma \n");
    printf("1 - ingles \n");
    printf("2 - Espanhol \n");
    printf("3 - Frances \n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("Welcome!");
        break;
    case 2:
        printf("Bienvenida!");
        break;
    case 3:
        printf("Accueillir!");
        break;

    default:
        printf("Opção inválida");
        break;
    }

    return 0;
}