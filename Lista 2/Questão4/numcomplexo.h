#ifndef NUMCOMPLEXO_H
#define NUMCOMPLETO_H
#include <stdio.h>

typedef struct numcomplexo
{
    float x;
    float y;
}complexo;



complexo* criarComplexo(float x,float y);
void destruirComplexo(complexo* z);
complexo* somarComplexos(complexo* z1, complexo* z2);
complexo* multiplicarComplexos(complexo* z1, complexo* z2);
#endif