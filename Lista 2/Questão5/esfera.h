#ifndef  ESFERA_H
#define  ESFERA_H
 
typedef struct 
{
    float raio;
} esfera;
typedef esfera* Esfera;

Esfera criarEsfera(float raio);
void destruirEsfera(Esfera esfera);
float calcular_volume(Esfera esfera);
float calcularArea(Esfera esfera);







#endif

