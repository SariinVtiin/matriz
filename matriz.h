#ifndef MATRIZ_H
#define MATRIZ_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Celula {
    struct Celula *direita, *abaixo;
    int linha, coluna;
    double valor;
} Celula;

typedef struct {
    int m, n;
    Celula *inicio, *fimLinha, *fimColuna;
} Matriz;

void CabecaPrincipal(Matriz *pmat);
void FLinhaVazia(Matriz *pmat);
void FColunaVazia(Matriz *pmat);
void Insere(Matriz *pmat, int i, int j, double elem);
void CriaMatriz(Matriz *MAux, int i, int j);
void LeMatriz(Matriz *pmat, FILE *dados);
void ImprimeMatriz(Matriz *pmat);
int Soma(Matriz *pC, Matriz *pA, Matriz *pB);
int Multiplica(Matriz *pC, Matriz *pA, Matriz *pB);

#endif  // MATRIZ_H