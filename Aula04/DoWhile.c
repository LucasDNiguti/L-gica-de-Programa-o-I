#include <stdio.h>
#include <stdlib.h>

int main () {

    int n;

    do
    {
        n++;
        printf("\nValor de n: %d", n);
    } while (n <= 9);

    return 0;
}

// irá repetir ao menos uma vez pela condição estar no fim.