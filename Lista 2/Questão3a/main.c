#include <stdio.h>
#include <stdlib.h>
#include "Jogadores.h"


int main() {
    jogador j1 = AtribuirJog("Juninho", 10, 7, 3);
    Imprimir(j1);
    if(BomJogador(j1)){
        printf("O %s e um bom jogador",j1.nome);
    }
    else{
        printf("O %s nao e um bom jogador", j1.nome);
    }
    return 0;

}
