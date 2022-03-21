/*typedef struct{
    int cod;
    char nome[50];
    float preco;
}INFO;*/

typedef struct NO{
    char info;
    struct NO *esq;
    struct NO *dir;
}Nodo;

Nodo* inicializa();
//void leDados(INFO *info);
void imprimeDado(char cod);
//Nodo* insereRaiz(Nodo *raiz);
void preFixadoEsq(Nodo* a);
void preFixadoDir(Nodo* a);
void centralEsq(Nodo* a);
void centralDir(Nodo* a);
void posFixadoEsq(Nodo* a);
void posFixadoDir(Nodo* a);
Nodo* consultaABP(Nodo *a, char info);
Nodo* InsereArvore(Nodo *a, char info);

