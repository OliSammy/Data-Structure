#ifndef PILHA_H
#define PILHA_H
#define MAX 100
#include <stdbool.h>
typedef struct
{
    int topo;
    char itens[MAX];
}Pilha;

Pilha* inicializar();
bool pilhavazia(Pilha *p);
bool pilhacheia(Pilha *p);
void push(Pilha *p,char itens);
char pop(Pilha *p);
bool verificarpareteses(char *expr);





#endif