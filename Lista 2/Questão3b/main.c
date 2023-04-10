#include <stdio.h>
#include <stdlib.h>
#include "Jogadores.h"
#include "Time.h"

jogador AtribuirJog(char nome[], int jogos, int gols, int assists) {
    jogador novo_jogador;
    strcpy(novo_jogador.nome, nome);
    novo_jogador.jogos = jogos;
    novo_jogador.gols = gols;
    novo_jogador.assists = assists;
    return novo_jogador;
}
int BomJogador(jogador j){
  return (j.gols > 8);
}
time TimeInicializar(char nome[], int vitorias, int empates, int derrotas, jogador jogadores[]){
    time novo_time;
    strcpy(novo_time.nome, nome);
    novo_time.vitorias = vitorias;
    novo_time.empates = empates;
    novo_time.derrotas = derrotas;
    for (int i = 0; i < 11; i++) {
        novo_time.jogadores[i] = jogadores[i];
    }
    return novo_time;
}
void TimeImprimir(time t) {
    printf("Nome: %s\n", t.nome);
    printf("Vitorias: %d\n", t.vitorias);
    printf("Empates: %d\n", t.empates);
    printf("Derrotas: %d\n", t.derrotas);
    printf("Jogadores:\n");
    for (int i = 0; i < 11; i++) {
        ImprimirJog(t.jogadores[i]);
        printf("-----------------------\n");
    }
}
int time_pontuacao(time t) {
    int pontos = t.vitorias * 3 + t.empates;
    return pontos;
}

int main() {
    jogador jog[11];
   for (int i = 0; i < 11; i++) {
        jog [i] = AtribuirJog("Juninho", 10, 7, 3);
    }
    
    jogador jogadorest1[11];
    time t1 = TimeInicializar("Time CC",8,6,3,jog);
    TimeImprimir(t1);
    int pontuacao = time_pontuacao(t1);
    printf("Pontuaçao do time: %d\n", pontuacao);

    return 0;

}
