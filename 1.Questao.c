#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int temperatura;

    printf("Digite quantos �C est� na temperatura externa: ");
    scanf("%d", &temperatura);

    if (temperatura > 25)
    {
        printf("O clima ser� ensolarado");
    }
    else if (temperatura >= 15 && temperatura <= 25)
    {
        printf("o clima ser� nublado");
    }
    else
    {
        printf("O clima ser� chuvoso");
    }

    return 0;
}