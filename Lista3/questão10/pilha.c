#include "pilha.h"

void inicializar(Pilha *p) {
    p->topo1 = -1;
    p->topo2 = MAX;
}

void empilha(Pilha *p, int i, int elemento) {
    if (p->topo1 + 1 == p->topo2) { // verifica se as pilhas se encontraram
        printf("Erro: pilhas cheias.\n");
        return;
    }

    if (i == 1) {
        p->itens[++p->topo1] = elemento;
    } else if (i == 2) {
        p->itens[--p->topo2] = elemento;
    } else {
        printf("Erro: pilha %d não existe.\n", i);
    }
}

int desempilha(Pilha *p, int i) {
    int elemento = 0;

    if (i == 1) {
        if (p->topo1 == -1) {
            printf("Erro: pilha 1 vazia.\n");
        } else {
            elemento = p->itens[p->topo1--];
        }
    } else if (i == 2) {
        if (p->topo2 == MAX) {
            printf("Erro: pilha 2 vazia.\n");
        } else {
            elemento = p->itens[p->topo2++];
        }
    } else {
        printf("Erro: pilha %d não existe.\n", i);
    }

    return elemento;
}
