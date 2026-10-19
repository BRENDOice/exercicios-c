#include <stdio.h>

int main() 
{
    // 1. Declaração de variáveis
    char nome[50];
    int idade;
    int servico; // Corrigido: sem acento
    int opcao; 
    
    // Pergunta inicial
    printf("Acessar servico?\n");
    printf("1 - Sim\n");
    printf("2 - Nao\n");
    printf("Opcao: ");
    
    if (scanf("%d", &servico) != 1) {
        printf("Entrada invalida. Por favor, insira um numero inteiro.\n");
        return 1; // Encerra o programa
    }

    // Checa se o usuário NÃO quis acessar o serviço
    if (servico != 1) {
        printf("Atendimento encerrado. Ate logo!\n");
        return 0; // Encerra o programa com sucesso
    }

    // 2. Entrada de dados iniciais
    printf("\nBem-vindo ao Sistema de Alistamento Militar Brasileiro!\n");
    printf("Qual o seu nome?\n");
    scanf("%49s", nome);
    printf("\n");

    printf("Informe sua idade:\n");
    scanf("%d", &idade);

    printf("\n--- STATUS DO ALISTAMENTO MILITAR ---\n");

    // 3. Validação de idade
    if (idade >= 18) {
        printf("Bem-vindo, %s! Voce esta autorizado a acessar o servico militar brasileiro.\n\n", nome);
        
        // Exibe o Menu de Opções
        printf("--- MENU DE OPCOES ---\n");
        printf("1 - Acompanhar Alistamento Militar\n");
        printf("2 - Acompanhar CDI\n");
        printf("3 - Alistamento Feminino\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        printf("\n");

        // 4. Estrutura Múltipla Alternativa (Switch-Case)
        switch (opcao) {
            case 1:
                printf("Opcao selecionada: Acompanhar Alistamento Militar.\n");
                break;
            case 2:
                printf("Opcao selecionada: Acompanhar CDI.\n");
                break;   
            case 3:
                printf("Opcao selecionada: Alistamento Feminino.\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

    } 
    else if (idade == 17) {
        printf("Aguarde a liberacao para se alistar.\n");      
    } 
    else {
        printf("Desculpe, solicitacao indisponivel para menores de 17 anos.\n");
    }

    return 0;
}