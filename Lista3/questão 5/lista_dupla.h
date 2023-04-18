#ifndef LISTA_DUP_H
#define LISTA_DUP_H

typedef struct no_dup {
    int dado;
    struct no_dup *prox;
    struct no_dup *ant;
} NoDuplo;

typedef struct {
    NoDuplo *inicio;
    NoDuplo *fim;
} FilaDupla;

FilaDupla* inicializar_fila_dupla();
void enqueue(FilaDupla *fila, int valor);
int dequeue(FilaDupla *fila);
void imprimir_fila_dupla(FilaDupla *fila);
void esvaziar_fila_dupla(FilaDupla *fila);

#endif
