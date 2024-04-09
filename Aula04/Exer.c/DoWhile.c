#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    float med = 0;
    int TAM;
    int num;

    printf("Quantos números irá adicionar: ");
    scanf("%d", &TAM);

    do
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        med = med + num;
        n++;
    } while (n < TAM);
    

    med = med / TAM;

    printf("\nA média final é: %f", med);

    return 0;
}