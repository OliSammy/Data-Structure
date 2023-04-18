#include <stdio.h>
#include <stdlib.h>
#include "lista_duplamente_encadeada.h"

Lista* criar_lista() {
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}

void inserir_elemento(Lista* lista, int valor) {
    No* novo_no = (No*) malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo = NULL;
    novo_no->anterior = lista->ultimo;

    if (lista->ultimo == NULL) {
        lista->primeiro = novo_no;
        lista->ultimo = novo_no;
    } else {
        lista->ultimo->proximo = novo_no;
        lista->ultimo = novo_no;
    }
}

void remover_elemento(Lista* lista, int valor) {
    No* atual = lista->primeiro;

    while (atual != NULL) {
        if (atual->valor == valor) {
            if (atual->anterior == NULL && atual->proximo == NULL) {
                lista->primeiro = NULL;
                lista->ultimo = NULL;
            } else if (atual->anterior == NULL) {
                lista->primeiro = atual->proximo;
                lista->primeiro->anterior = NULL;
            } else if (atual->proximo == NULL) {
                lista->ultimo = atual->anterior;
                lista->ultimo->proximo = NULL;
            } else {
                atual->anterior->proximo = atual->proximo;
                atual->proximo->anterior = atual->anterior;
            }

            free(atual);
            return;
        }
        atual = atual->proximo;
    }

    printf("Elemento %d nao encontrado na lista.\n", valor);
}

void imprimir_lista(Lista* lista) {
    No* atual = lista->primeiro;

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }

    printf("\n");
}
