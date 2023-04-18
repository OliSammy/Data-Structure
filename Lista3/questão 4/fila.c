#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"

Fila* inicializar() {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    f->inicio = 0;
    f->fim = -1;
    return f;
}

int tamanho(Fila *f) {
    return f->fim - f->inicio + 1;
}

bool filavazia(Fila *f) {
    return tamanho(f) == 0;
}

bool filacheia(Fila *f) {
    return tamanho(f) == MAX;
}

void enqueue(Fila *f, int item) {
    if (filacheia(f)) {
        printf("Fila cheia\n");
        return;
    }
    f->itens[++f->fim] = item;
}

int dequeue(Fila *f) {
    if (filavazia(f)) {
        printf("Fila vazia\n");
        return -1;
    }
    int item = f->itens[f->inicio++];
    return item;
}

void inverter(Fila *f) {
    Pilha *p = inicializar();
    while (!filavazia(f)) {
        int item = dequeue(f);
        push(p, item);
    }
    while (!pilhavazia(p)) {
        int item = pop(p);
        enqueue(f, item);
    }
    free(p);
}
