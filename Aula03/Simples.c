#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2;
    float med;

    printf("Inform as notas...");

    printf("\nInforme a 1.o nota: ");
    scanf("%d", &n1);

    printf("\nInforme a 2.o nota: ");
    scanf("%d", &n2);

    med = n1 + n2;
    med = med / 2;

    if (med >= 6)
    {
        printf("APROVADO: %f", med);
        exit(0);
    }
    else
    {
        printf("REPROVADO: %f", med);
        exit(0);
    }
    return 0;
}