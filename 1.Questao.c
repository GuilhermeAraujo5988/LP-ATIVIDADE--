#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int temperatura;

    printf("Digite quantos °C está na temperatura externa: ");
    scanf("%d", &temperatura);

    if (temperatura > 25)
    {
        printf("O clima será ensolarado");
    }
    else if (temperatura >= 15 && temperatura <= 25)
    {
        printf("o clima será nublado");
    }
    else
    {
        printf("O clima será chuvoso");
    }

    return 0;
}