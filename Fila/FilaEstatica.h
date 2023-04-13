#ifndef FILAESTATICA_H
#define FILAESTATICA_H
#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
typedef struct fila Fila;
typedef Fila* Fila;
Fila cria_Fila();
void libera_Fila(Fila fi);
int consulta_Fila(Fila fi,int pos, struct Aluno* al);
int insere_Fila(Fila fi, struct Aluno al);
int remove_Fila(Fila fi);
int tamanho_Fila(Fila fi);
int Fila_cheia(Fila fi);
int Fila_vazia(Fila fi);






#endif