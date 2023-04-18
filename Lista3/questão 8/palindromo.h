#ifndef PALINDROMO_H
#define PALINDROMO_H


typedef struct {
    char *dados;
    int tamanho;
    int topo;
} Pilha;
int eh_palindromo(char palavra[]);
Pilha *cria_pilha(int tamanho);
void destroi_pilha(Pilha *pilha);
void empilha(Pilha *pilha, char dado);
char desempilha(Pilha *pilha);

#endif