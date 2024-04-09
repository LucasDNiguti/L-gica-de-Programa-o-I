#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float med;
    int TAM;
    int num;

    printf("Quantos números irá adicionar: ");
    scanf("%d", &TAM);

    for (n = 0; n < TAM; n++)
    {
        printf("Digite o número %d: ", n + 1);
        scanf("%d", &num);
        med = med + num;
    }
    med = med / TAM;

    printf("\nA média final é: %f", med);

    return 0;
}