#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2;
    float med,freq;

    printf("Inform as notas...");

    printf("\nInforme a 1.o nota: ");
    scanf("%d", &n1);

    printf("\nInforme a 2.o nota: ");
    scanf("%d", &n2);

    printf("\nInforme a frequencia: ");
    scanf("%f", &freq);

    med = n1 + n2;
    med = med / 2;

    if (med >= 6 && freq >=60)
    {
        printf("APROVADO: %f", med);
        exit(0);
    }
    else if (med < 6 || freq < 60)
    {
        printf("REPROVADO: %f", med);
        exit(0);
    }
    return 0;
}