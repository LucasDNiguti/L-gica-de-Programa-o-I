#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;

    printf("Informe um mês: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;

    case 2:
        printf("Fevereiro");

    default:
        printf("Mês não existe..");
        exit(0);
        break;
    }
    return 0;
}