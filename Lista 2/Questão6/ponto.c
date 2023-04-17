#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"


Ponto acessa(Ponto* p, float x, float y){
    return *p;
}

void atribuir(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}

float distancia(Ponto* p1, Ponto p2){
    float dx = p1->x - p2.x;
    float dy = p1->y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

void libera(Ponto* p){
    free(p);
}

Ponto* cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p == NULL){
        printf("Memoria Insuficiente!\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void imprimir(Ponto* p){
    printf("(%f, %f)\n", p->x, p->y);
}
