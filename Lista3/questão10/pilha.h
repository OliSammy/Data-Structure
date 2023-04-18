#define MAX 100

typedef struct Pilha {
    int topo1;
    int topo2;
    int itens[MAX];
} Pilha;

void inicializar(Pilha *p);

void empilha(Pilha *p, int i, int elemento);

int desempilha(Pilha *p, int i);
