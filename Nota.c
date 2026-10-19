#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int i; // Variável de controle (contador)

    // O comando FOR vai repetir todo o bloco interno 3 vezes
    for (i = 1; i <= 3; i++) {
        printf("\n--- ALUNO %d ---\n", i);

        printf("nota 1 = ");
        scanf("%f", &nota1);
        printf("nota 2 = ");
        scanf("%f", &nota2);
        printf("nota 3 = ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;
        printf("media = %.2f", media);

        if (media >= 7.0) {
            printf(" , Aluno Aprovado\n");
        } else {
            printf(" , Aluno Reprovado\n");
        }
    } // O programa volta para o topo do FOR até completar as 3 repetições

    return 0;
}