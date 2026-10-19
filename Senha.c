#include <stdio.h>

int main() {
    int senha = 0;

    // Enquanto a senha for DIFERENTE de 1234, continua pedindo
    while (senha != 1234) {
        printf("Digite a senha de acesso: ");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("Senha incorreta! Tente novamente.\n\n");
        }
    }

    printf("\n--> ACESSO LIBERADO! Bem-vindo ao sistema.\n");

    return 0;
}