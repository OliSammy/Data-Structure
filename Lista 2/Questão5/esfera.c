#include "esfera.h"
#include <math.h>
#include <stdlib.h>
float pi = 3.14;

Esfera criar_esfera(float raio) {
    Esfera esfera = (Esfera) malloc(sizeof(esfera));
    esfera->raio = raio;
    return esfera;
}

void destruir_esfera(Esfera esfera) {
    free(esfera);
}

float calcular_volume(Esfera esfera) {
    return (4.0/3.0) * pi * pow(esfera->raio, 3);
}

float calcular_area(Esfera esfera) {
    return 4 * pi * pow(esfera->raio, 2);
}
