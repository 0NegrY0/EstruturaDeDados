typedef struct str_no{
    char info;
    int key;
    struct str_no *esq;
    struct str_no *dir;
}NO;


/*cria uma arvore vazia*/
NO* criaArvore();

/*aloca no raiz e insere dado*/
NO* insere(NO *a, char info, int key);

/*
// CAMINHAMENTOS
*/
void preFixadoEsq(NO *a);

void prefixadoDir(NO *a);
    
void centralEsq(NO *a);
   
void centralDir(NO *a);

void posFixadoEsq(NO *a);

void posFixadoDir(NO *a);

/*
// CONSULTAS
*/

NO* consultaKey1(NO *a, int key);

NO* consultaKey2(NO *a, int key);

/*imprime no*/
void imprimeNo(NO *a);