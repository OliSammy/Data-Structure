#ifndef JOGADORES_H
#define JOGADORES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char nome[50];
    int jogos;
    int gols;
    int assists;
} jogador;

jogador AtribuirJog(char nome[], int jogos, int gols, int assists) {
    jogador novo_jogador;
    strcpy(novo_jogador.nome, nome);
    novo_jogador.jogos = jogos;
    novo_jogador.gols = gols;
    novo_jogador.assists = assists;
    return novo_jogador;
}
void Imprimir(jogador j) {
    printf("Nome: %s\n", j.nome);
    printf("Jogos: %d\n", j.jogos);
    printf("Gols: %d\n", j.gols);
    printf("Assistencias: %d\n", j.assists);
}
int BomJogador(jogador j){
  return (j.gols > 8);
}
#endif
