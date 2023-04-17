#ifndef PONTO_H
#define PONTO_H

typedef struct 
{
    float x, y;
} Ponto;

void libera(Ponto* p);
Ponto acessa(Ponto* p, float x, float y);
void atribuir(Ponto* p, float x, float y);
float distancia(Ponto* p1, Ponto p2);
Ponto* cria(float x, float y);
void imprimir(Ponto* p);

#endif
