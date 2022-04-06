#include <stdlib.h>

typedef struct str_no{
    struct str_no *esq;
    struct str_no *dir;
    int info; 
}NO;


NO* insere(NO *a, int info){           //ordem de key
    if (a == NULL){
        NO *aux = (NO*) malloc(sizeof(NO));
        aux->info = info;
        aux->esq = NULL;
        aux->dir = NULL;
        return aux;
    }

    else{
        if (info < a->info){
            a->esq = insere(a->esq, info);
        }
        else{
            a->dir = insere(a->dir, info);
        }
        return a;
    }
}


NO* consulta(NO *a, int info){
    if (a == NULL){
        return NULL;
    }

    else{
        if (a->info == info){
            return a;
        }
        else{
            if(a->info > info){
                return consulta(a->esq, info);
            }
            else{
                return consulta(a->dir, info);
            }
        }
    }
}

NO* intersection(NO *a, NO *b, NO *c){
    if(a != NULL){
        if(consulta(b, a->info) != NULL){
            c = insere(c, a->info);
        }
        c = intersection(a->esq, b, c);
        c = intersection(a->dir, b, c);
    }
    return c;
}

int testaIgual(NO *a, NO *b, int igual){            //igual inicia com 1, se ficar 0 a função retorna 0
    if(a == NULL && b == NULL){
        return igual;
    }
    else{
        if(a != NULL && b != NULL && igual == 1){
            if(a->info == b->info){
                testaIgual(a->esq, b->esq, igual);
                testaIgual(a->dir, b->dir, igual);
            }
            else{
                igual = 0;
            }
        }
        else{
            igual = 0;
        }
    }
    return igual;
}
