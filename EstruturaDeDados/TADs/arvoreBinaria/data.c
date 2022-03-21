#include <stdio.h>
#include <stdlib.h>
#include "data.h"

NO* criaArvore(){
    return NULL;
}

NO* insere(NO *a, char info, int key){           //ordem de key
    if (a == NULL){
        NO *aux = (NO*) malloc(sizeof(NO));
        aux->info = info;
        aux->key = key;
        aux->esq = NULL;
        aux->dir = NULL;
        return aux;
    }

    else{
        if (key < a->key){
            a->esq = insere(a->esq, info, key);
        }
        else{
            a->dir = insere(a->dir, info, key);
        }
        return a;
    }
}

/*
// CAMINHAMENTOS
*/
void preFixadoEsq(NO *a){
    if (a!= NULL){
        printf("%c\n",a->info);
        preFixadoEsq(a->esq);
        preFixadoEsq(a->dir);
    }
}

void prefixadoDir(NO *a){
    if (a!= NULL){
        printf("%c\n",a->info);
        prefixadoDir(a->dir);
        prefixadoDir(a->esq);
    }
}

void centralEsq(NO *a){
    if (a!= NULL){
        centralEsq(a->esq);
        printf("%c\n",a->info);
        centralEsq(a->dir);
    }
}

void centralDir(NO *a){
    if(a!=NULL){
        centralDir(a->dir);
        printf("%c\n",a->info);
        centralDir(a->esq);
    }
}

void posFixadoEsq(NO *a){///////////////////////////
    if (a!= NULL){
        posFixadoEsq(a->esq);
        posFixadoEsq(a->dir);
        printf("%c\n",a->info);
    }
}

void posFixadoDir(NO *a){
    if (a!= NULL){
        posFixadoDir(a->dir);
        posFixadoDir(a->esq);
        printf("%c\n",a->info);
    }
}

/*
// CONSULTAS
*/

NO* consultaKey1(NO *a, int key){
    while (a!=NULL){
        if (a->key == key ){
            return a; 
        }
        
        else{
            if (a->key > key){
                a = a->esq;
            }
            
            else{
                a = a->dir;
            }
            return NULL;
        }
    } 
}

NO* consultaKey2(NO *a, int key){
    if (a == NULL){
        return NULL;
    }

    else{
        if (a->key == key){
            return a;
        }
        else{
            if(a->key > key){
                return consultaKey2(a->esq, key);
            }
            else{
                return consultaKey2(a->dir, key);
            }
        }
    }
}

void imprimeNo(NO *a){
    if(a == NULL){
        printf("numero não encontrado\n");
    }
    else{
        printf("Info: %c\nKey: %d\n", a->info, a->key);
    }
}