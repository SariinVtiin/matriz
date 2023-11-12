#include <stdio.h>
#include "matriz.h"

int main() {
    Matriz A, B, C;
    FILE *dados;

    dados = fopen("data.txt", "r");

    if (!dados) {
        printf("**Erro na abertura de arquivo. Fim do programa**");
        exit(1);
    }

    LeMatriz(&A, dados);
    printf("Matriz A:\n");
    ImprimeMatriz(&A);

    LeMatriz(&B, dados);
    printf("Matriz B:\n");
    ImprimeMatriz(&B);

    if (Soma(&C, &A, &B)) {
        printf("Matriz A + B:\n");
        ImprimeMatriz(&C);
    } else
        printf("Impossivel A + B\n");

    if (Multiplica(&C, &A, &A)) {
        printf("Matriz A x A:\n");
        ImprimeMatriz(&C);
    } else
        printf("Imposs�vel A x A\n");

    LeMatriz(&B, dados);
    printf("Nova matriz B:\n");
    ImprimeMatriz(&B);

    if (Soma(&C, &A, &B)) {
        printf("Matriz A+B:\n");
        ImprimeMatriz(&C);
    } else
        printf("Impossivel A+B\n");

    if (Multiplica(&C, &A, &B)) {
        printf("Matriz A x B:\n");
        ImprimeMatriz(&C);
    } else
        printf("Impossivel A x B\n");

    if (Multiplica(&C, &B, &B)) {
        printf("Matriz B x B:\n");
        ImprimeMatriz(&C);
    } else
        printf("Impossivel B x B\n");

    printf("Matriz A:\n");
    ImprimeMatriz(&A);
    printf("Matriz B:\n");
    ImprimeMatriz(&B);

    fclose(dados);
    system("PAUSE");
    return 0;
}

