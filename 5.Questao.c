#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    printf("Digite um n�mero de acordo com a sua prefer�ncia de idioma \n");
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
        printf("Op��o inv�lida");
        break;
    }

    return 0;
}