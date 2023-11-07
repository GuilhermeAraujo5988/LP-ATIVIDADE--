#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int nota = 0;
    float somaNota = 0;
    float media = 0;
    int i = 0;
    int quantidade; 

    printf ("Digite quantas notas deseja calcular:"); 
    scanf ("%d", &quantidade); 
    printf ("\n");
    
    for (i = 1; i <= quantidade; i++)
    {
        printf("Digite a %d° nota ", i);
        scanf("%d", &nota);

        somaNota += nota;
        media = somaNota / quantidade;
    }
    printf("\nMédia das notas do aluno: %1.f \n", media);

    return 0;
}