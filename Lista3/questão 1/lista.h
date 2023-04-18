#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#define MAX 100

typedef struct lista_estatica {
    int itens[MAX];
    int tam;
} ListaEstatica;

typedef struct no {
    int item;
    struct no *prox;
    struct no *ant;
} No;

typedef struct lista_duplamente_encadeada {
    No *inicio;
    No *fim;
    int tam;
} ListaDuplamenteEncadeada;

typedef struct lista {
    int item;
    struct lista *prox;
} Lista;

ListaEstatica *criar_lista_estatica();
void inserir_lista_estatica(ListaEstatica *lista, int item);
void remover_lista_estatica(ListaEstatica *lista, int item);
void imprimir_lista_estatica(ListaEstatica *lista);

ListaDuplamenteEncadeada *criar_lista_duplamente_encadeada();
void inserir_lista_duplamente_encadeada(ListaDuplamenteEncadeada *lista, int item);
void remover_lista_duplamente_encadeada(ListaDuplamenteEncadeada *lista, int item);
void imprimir_lista_duplamente_encadeada(ListaDuplamenteEncadeada *lista);

Lista *criar_lista();
void inserir_lista(Lista **lista, int item);
void remover_lista(Lista **lista, int item);
void imprimir_lista(Lista *lista);

Lista *copiar_lista_estatica_para_dinamica(ListaEstatica *lista);
ListaEstatica *copiar_lista_dinamica_para_estatica(Lista *lista);

#endif // LISTA_H_INCLUDED
