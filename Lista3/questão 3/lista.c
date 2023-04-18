#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no {
    int valor;
    No* proximo;
};

struct lista {
    No* inicio;
    No* fim;
};

Lista* criar() {
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->fim = NULL;
    return lista;
}

void inserir(Lista* lista, int valor) {
    No* novo_no = (No*) malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo_no;
        lista->fim = novo_no;
    } else {
        lista->fim->proximo = novo_no;
        lista->fim = novo_no;
    }
}

void remover(Lista* lista, int valor) {
    No* atual = lista->inicio;
    No* anterior = NULL;

    while (atual != NULL && atual->valor != valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual != NULL) {
        if (anterior == NULL) {
            lista->inicio = atual->proximo;
        } else {
            anterior->proximo = atual->proximo;
        }

        if (lista->fim == atual) {
            lista->fim = anterior;
        }

        free(atual);
    }
}

void imprimir(Lista* lista) {
    No* atual = lista->inicio;

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }

    printf("\n");
}

void liberar(Lista* lista) {
    No* atual = lista->inicio;
    No* proximo;

    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    free(lista);
}

void remover_nos(Lista* lista, Lista* lista_remover1, Lista* lista_remover2) {
    No* atual = lista->inicio;
    No* anterior = NULL;
    No* proximo;

    while (atual != NULL) {
        proximo = atual->proximo;

        if (lista_remover1->inicio != NULL && atual->valor == lista_remover1->inicio->valor) {
            if (anterior == NULL) {
                lista->inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            if (lista->fim == atual) {
                lista->fim = anterior;
            }

            free(atual);
            lista_remover1->inicio = lista_remover1->inicio->proximo;
        } else if (lista_remover2->inicio != NULL && atual->valor == lista_remover2->inicio->valor) {
            if (anterior == NULL) {
                lista->inicio = atual->proximo;
            }
        }
    }
}