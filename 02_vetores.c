#include <stdio.h>
#define NUM_ALUNOS 5
#define NUM_NOTAS 4
 
float obterNotaValida() {
    float nota;
    while (1) {
        printf("informe a nota (0 a 10): ");
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            break;
        } else {
            printf("inválido.\n");
        }
    }
    return nota;
}
int main() {
    float notas[NUM_ALUNOS][NUM_NOTAS];
    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("aluno %d\n", i + 1);
        for (int j = 0; j < NUM_NOTAS; j++) {
            printf("informe a nota %d do Aluno %d: ", j + 1, i + 1);
            notas[i][j] = obterNotaValida();
        }
        printf("\n");
    }
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("notas %d: ", i + 1);
        for (int j = 0; j < NUM_NOTAS; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }
    return 0;
}
