#include <stdio.h>

int main() {
    float notas[3][2]; // Matriz: 3 Alunos x 2 Notas
    float medias[3];   // Vetor: Guarda a média dos 3 alunos
    
    int opcao;
    int i, j;
    float soma;

    do {
        printf("\n=== SISTEMA DE GESTAO ESCOLAR ===\n");
        printf("1 - Cadastrar Notas dos Alunos\n");
        printf("2 - Exibir Relatorio de Medias\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- CADASTRO DE NOTAS ---\n");
                for (i = 0; i < 3; i++) {
                    soma = 0.0;
                    for (j = 0; j < 2; j++) {
                        printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
                        scanf("%f", &notas[i][j]);
                        soma += notas[i][j];
                    }
                    medias[i] = soma / 2.0;
                }
                printf("\nNotas e medias cadastradas com sucesso!\n");
                break;

            case 2:
                printf("\n--- RELATORIO DE ALUNOS ---\n");
                for (i = 0; i < 3; i++) {
                    printf("Aluno %d: Media = %.2f - ", i + 1, medias[i]);
                    if (medias[i] >= 7.0) {
                        printf("Aprovado\n");
                    } else {
                        printf("Reprovado\n");
                    }
                }
                break;

            case 3:
                printf("\nSaindo do sistema...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}