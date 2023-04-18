#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

ListaEstatica *criar_lista_estatica() {
    ListaEstatica *lista = (ListaEstatica *) malloc(sizeof(ListaEstatica));
    lista->tam = 0;
    return lista;
}

void inserir_lista_estatica(ListaEstatica *lista, int item) {
    if (lista->tam == MAX) {
        printf("Lista cheia!\n");
        return;
    }
    lista->itens[lista->tam] = item;
    lista->tam++;
}

void remover_lista_estatica(ListaEstatica *lista, int item) {
    int i, j;
    for (i = 0; i < lista->tam; i++) {
        if (lista->itens[i] == item) {
            for (j = i; j < lista->tam - 1; j++) {
                lista->itens[j] = lista->itens[j+1];
            }
            lista->tam--;
            break;
        }
    }
}

void imprimir_lista_estatica(ListaEstatica *lista) {
    int i;
    printf("Lista estatica: ");
    for (i = 0; i < lista->tam; i++) {
        printf("%d ", lista->itens[i]);
    }
    printf("\n");
}

ListaDuplamenteEncadeada *criar_lista_duplamente_encadeada() {
    ListaDuplamenteEncadeada *lista = (ListaDuplamenteEncadeada *) malloc(sizeof(ListaDuplamenteEncadeada));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
    return lista;
}

void inserir_lista_duplamente_encadeada(ListaDuplamenteEncadeada *l);