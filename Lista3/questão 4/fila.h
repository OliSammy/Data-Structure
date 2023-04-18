#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define MAX 100

typedef struct fila {
    int inicio, fim;
    int itens[MAX];
} Fila;

Fila* inicializar();
int tamanho(Fila *f);
bool filavazia(Fila *f);
bool filacheia(Fila *f);
void enqueue(Fila *f, int item);
int dequeue(Fila *f);
void inverter(Fila *f);

#endif // FILA_H_INCLUDED
