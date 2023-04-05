#include <stdio.h>
#include "numcomplexo.h"

complexo* criarComplexo(float x, float y){

    complexo* z = (complexo*) malloc(sizeof(complexo));
    z->x=x;
    z->y=y;
    return z;
}
void destruirComplexo(complexo* z) {
  free(z);
}
complexo* somarComplexos(complexo* z1, complexo* z2) {
  float real = z1->x + z2->x;
  float imag = z1->y + z2->y;
  complexo* z = criarComplexo(real, imag);
  return z;
}
complexo* multiplicarComplexos(complexo* z1, complexo* z2) {
  float real = z1->x * z2->x - z1->y * z2->y;
  float imag = z1->x * z2->y + z2->x * z1->y;
  complexo* z = criarComplexo(real, imag);
  return z;
}
int main(){
   complexo* comp1 = criarComplexo(1.0, 2.0);
   complexo* comp2 = criarComplexo(3.0, -4.0);
   destruirComplexo(comp1);
    multiplicarComplexos(comp1,comp2);
}