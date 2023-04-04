#ifndef TIME_H
#define TIME_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Jogadores.h"

typedef struct {
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    jogador jogadores[11];
} time;

time TimeInicializar(char nome[], int vitorias, int empates, int derrotas, jogador jogadores[]);
void TimeImprimir(time t);
int time_pontuacao(time t);

#endif
