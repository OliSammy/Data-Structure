#ifndef LISTA_H
#define LISTA_H

typedef struct no No;
typedef struct lista Lista;

Lista* criar();
void inserir(Lista* lista, int valor);
void remover(Lista* lista, int valor);
void imprimir(Lista* lista);
void liberar(Lista* lista);
void remover_nos(Lista* lista, Lista* lista_remover1, Lista* lista_remover2);

#endif
