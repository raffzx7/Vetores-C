#include <stdio.h>
#define NUM_ALUNOS 5
#define NUM_NOTAS 4

struct Aluno {
    char nome[50];
    float notas[NUM_NOTAS];
    float media;
    char resultado[20];
};
void calcularMedia(struct Aluno *aluno) {
    float soma = 0;
    for (int i = 0; i < NUM_NOTAS; i++) {
        soma += aluno->notas[i];
    }
    aluno->media = soma / NUM_NOTAS;
}
void determinarResultado(struct Aluno *aluno) {
    if (aluno->media < 4)
        strcpy(aluno->resultado, "Reprovado");
    else if (aluno->media < 6)
        strcpy(aluno->resultado, "Recuperação");
    else
        strcpy(aluno->resultado, "Aprovado");
}
int main() {
    struct Aluno alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        calcularMedia(&alunos[i]);
        determinarResultado(&alunos[i]);
    }
    printf("resultados:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno: %s - Média: %.2f - Resultado: %s\n", alunos[i].nome, alunos[i].media, alunos[i].resultado);
    }
    return 0;
}
