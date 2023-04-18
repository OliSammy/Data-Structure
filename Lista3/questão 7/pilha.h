#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#define MAX 100

typedef struct pilha Pilha;

Pilha* inicializar();
void push(Pilha *p, int item);
int pop(Pilha *p);
bool pilhavazia(Pilha *p);
bool pilhacheia(Pilha *p);

#endif // PILHA_H_INCLUDED
