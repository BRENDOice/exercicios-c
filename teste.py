#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome[50];
    int idade;

    // Entrada de dados
    printf("Bem vindo de volta\n");
    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("\n");

    printf("informe sua idade\n");
    scanf("%d", &idade);

    // Estrutura Condicional (se / senao -> if / else)
    if (idade >= 18) {
        printf("voce e de maior\n");
        printf("Esta autorizado a acessar o serviço\n");
    } else {
        printf("voce e de menor\n Nao pode ter acesso devido a menor idade\n");
    }

    return 0;
}