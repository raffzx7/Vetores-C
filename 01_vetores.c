#include <stdio.h>
#include <string.h>
#define NUM_ALUNOS 5
#define TAM_NOME 100
  
typedef struct {
    char nome[TAM_NOME];
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];
    int i;

    printf("cadastro de Alunos\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("informe o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, TAM_NOME, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';  // Remove newline character
    }

    printf("alunos Cadastrados:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %s\n", i + 1, alunos[i].nome);
    }

    return 0;
}
