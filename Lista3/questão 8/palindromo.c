#include "palindromo.h"
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *dados;
    int tamanho;
    int topo;
} Pilha;

Pilha *cria_pilha(int tamanho) {
    Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->dados = (char*) malloc(tamanho * sizeof(char));
    pilha->tamanho = tamanho;
    pilha->topo = -1;
    return pilha;
}

void destroi_pilha(Pilha *pilha) {
    free(pilha->dados);
    free(pilha);
}

void empilha(Pilha *pilha, char dado) {
    if (pilha->topo == pilha->tamanho - 1) {
        return;
    }
    pilha->topo++;
    pilha->dados[pilha->topo] = dado;
}
#ifndef PALINDROMO_H
#define PALINDROMO_H


typedef struct {
    char *dados;
    int tamanho;
    int topo;
} Pilha;
int eh_palindromo(char palavra[]);
Pilha *cria_pilha(int tamanho);
void destroi_pilha(Pilha *pilha);
void empilha(Pilha *pilha, char dado);
char desempilha(Pilha *pilha);

#endif

char desempilha(Pilha *pilha) {
    if (pilha->topo == -1) {
        return '\0';
    }
    char dado = pilha->dados[pilha->topo];
    pilha->topo--;
    return dado;
}

int eh_palindromo(char palavra[]) {
    int tamanho = strlen(palavra);
    Pilha *pilha = cria_pilha(tamanho/2);
    int i;

    // Empilha a primeira metade dos caracteres
    for (i = 0; i < tamanho/2; i++) {
        empilha(pilha, palavra[i]);
    }

    // Desempilha e compara com a segunda metade dos caracteres
    if (tamanho % 2 != 0) {
        i++;
    }
    for (; i < tamanho; i++) {
        char c = desempilha(pilha);
        if (c != palavra[i]) {
            destroi_pilha(pilha);
            return 0;
        }
    }
    destroi_pilha(pilha);
    return 1;
}
