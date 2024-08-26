#include <stdio.h>
#include <string.h>
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
        strcpy(aluno->resultado, "reprovado");
    else if (aluno->media < 6)
        strcpy(aluno->resultado, "recuperação");
    else
        strcpy(aluno->resultado, "aprovado");
}
int main() {
    struct Aluno alunos[NUM_ALUNOS];

    int opcao;
    printf("informe o número do aluno que deseja editar o resultado (1 a %d): ", NUM_ALUNOS);
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > NUM_ALUNOS) {
        printf("Opção inválida!\n");
        return 1;
    }
    int indiceAluno = opcao - 1;

    printf("aluno: %s\n", alunos[indiceAluno].nome);
    printf("média atual: %.2f\n", alunos[indiceAluno].media);
    printf("resultado atual: %s\n", alunos[indiceAluno].resultado);

    printf("informe o novo resultado (Reprovado, Recuperação, Aprovado): ");
    scanf("%s", alunos[indiceAluno].resultado);

   printf("Resultado do aluno atualizado com sucesso!\n");

    return 0;
}
