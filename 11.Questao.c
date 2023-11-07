#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char acesso [200];
    char acessoCorreto[200] = "2020";

    do
    {
        printf("Digite o código de acesso: ");
        scanf("%s", &acesso);
        printf ("\n");

        if (strcmp(acessoCorreto, acesso) == 0)
        {
            printf("Acesso liberado!");
        }
    } while (strcmp(acessoCorreto, acesso) != 0);

    return 0;
}