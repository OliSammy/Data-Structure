#ifndef LISTA_DUPLAMENTE_ENCADEADA_H
#define LISTA_DUPLAMENTE_ENCADEADA_H

typedef struct no No;
struct no {
    int valor;
    No* proximo;
    No* anterior;
};

typedef struct lista Lista;
struct lista {
    No* primeiro;
    No* ultimo;
};

Lista* criar_lista();
void inserir_elemento(Lista* lista, int valor);
void remover_elemento(Lista* lista, int valor);
void imprimir_lista(Lista* lista);

#endif
