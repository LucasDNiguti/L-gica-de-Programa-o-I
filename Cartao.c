#include <stdio.h>
#include <stdlib.h>

int main()
{
    char senha;
    int cartao;
    char digitado;

    // inserir cartao
    printf("Inserir cartao? 1/0 : ");
    scanf("%d", &cartao);

    if (cartao == 1)
    {

        printf("\nCrie sua senha: ");
        scanf("%s", &senha);
        printf("\n-- Senha criada --\n");
    }
    else
    {
        printf("Processo encerrado");
        exit(0);
    }

    printf("\nDigite sua senha: ");

    scanf("%s", &digitado);

    if (senha == digitado)
    {
        printf("\nSeu saldo é: 1000$ ");
    }
    else
    {
        printf("Senha inválida");
    }

    return 0;
}