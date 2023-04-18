#include "conversao.h"
#include <math.h>

int converter_para_decimal(int base, Pilha *p){
    int decimal = 0;
    int potencia = 0;

    while(!pilhavazia(p)){
        int algarismo = pop(p);
        decimal += algarismo * pow(base, potencia);
        potencia++;
    }

    return decimal;
}
