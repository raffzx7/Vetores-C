#include <stdio.h>
#define NUM_ALUNOS 5
#define NUM_NOTAS 4

struct Aluno {
    char nome[50];
    float notas[NUM_NOTAS];
    float notaTotal;
    float media;
};
 
int main() {
    struct Aluno alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("informe o nome %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("informe as notas %d (4 notas entre 0 e 10): ", i + 1);
        for (int j = 0; j < NUM_NOTAS; j++) {
            scanf("%f", &alunos[i].notas[j]);
            // Verifica se a nota está no intervalo válido
            while (alunos[i].notas[j] < 0 || alunos[i].notas[j] > 10) {
                printf("Nota inválida! Digite novamente: ");
                scanf("%f", &alunos[i].notas[j]);
            }
        }

        alunos[i].notaTotal = 0;
        for (int j = 0; j < NUM_NOTAS; j++) {
            alunos[i].notaTotal += alunos[i].notas[j];
        }

        alunos[i].media = alunos[i].notaTotal / NUM_NOTAS;

    }

    printf("\nInformacoes dos Alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Nota Total: %.2f\n", alunos[i].notaTotal);
        printf("Media: %.2f\n", alunos[i].media);
        printf("\n");

    }

    return 0;
}
