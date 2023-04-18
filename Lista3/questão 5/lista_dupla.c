#include <stdio.h>
#include <stdlib.h>
#include "lista_dupla.h"

FilaDupla* inicializar_fila_dupla() {
    FilaDupla *fila = (FilaDupla*) malloc(sizeof(FilaDupla));
    fila->inicio = NULL;
    fila->fim = NULL;
    return fila;
}

void enqueue(FilaDupla *fila, int valor) {
    NoDuplo *novo_no = (NoDuplo*) malloc(sizeof(NoDuplo));
    novo_no->dado = valor;
    novo_no->prox = NULL;

    if (fila->inicio == NULL) {
        fila->inicio = novo_no;
        fila->fim = novo_no;
        novo_no->ant = NULL;
    } else {
        fila->fim->prox = novo_no;
        novo_no->ant = fila->fim;
        fila->fim = novo_no;
    }
}

int dequeue(FilaDupla *fila) {
    if (fila->inicio == NULL) {
        printf("Fila vazia!\n");
        return -1;
    }

    NoDuplo *temp = fila->inicio;
    int valor = temp->dado;

    fila->inicio = fila->inicio->prox;
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    } else {
        fila->inicio->ant = NULL;
    }

    free(temp);
    return valor;
}

void imprimir_fila_dupla(FilaDupla *fila) {
    if (fila->inicio == NULL) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Fila: ");
    NoDuplo *atual = fila->inicio;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

void esvaziar_fila_dupla(FilaDupla *fila) {
    while (fila->inicio != NULL) {
        dequeue(fila);
    }
}
