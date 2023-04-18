#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <stdbool.h>



Pilha* inicializar(){
    Pilha *p=(Pilha*)malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}
bool pilhavazia(Pilha *p){
    if(p->topo==-1){
        return true;
    }
    return false;
}
bool pilhacheia(Pilha *p){
    if(p->topo==MAX-1){
        return true;
    } 
        return false;
}
void push(Pilha *p, char itens){
    if(pilhacheia(p)){
        printf("pilha está cheia");
        return;
    } 
    p->itens[++p->topo]=itens;
    p->topo++;
}
char pop(Pilha *p){
if (pilhavazia(p)) {
        printf("pilha está vazia");
        return '\0';
    }
    char item = p->itens[p->topo];
    p->topo--;
    return item;
}


