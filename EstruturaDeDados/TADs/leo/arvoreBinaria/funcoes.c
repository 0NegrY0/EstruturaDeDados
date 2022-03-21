#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Nodo* inicializa(){
    return NULL;
}

/*void leDados(INFO *info){
    printf("codigo: ");
    scanf(" %d", &info->cod);
    printf("nome: ");
    getchar();
    gets(info->nome);
    printf("preco:");
    scanf(" %f", &info->preco);
}*/

void imprimeDado(char cod){
    printf("codigo: %c\n", cod);
    /*printf("nome: %s\n",info.nome);
    printf("preco: %.2f\n", info.preco);*/
}

/*Nodo* insereRaiz(Nodo *raiz){
    Nodo *nodo;
    if(raiz==NULL){
        nodo=(Nodo*)malloc(sizeof(Nodo));
        leDados(&nodo->info);
        nodo->dir=NULL;
        nodo->esq=NULL;
        return nodo;
    }
    else
        printf("Raiz ja existe\n");
}*/

/*Nodo* InsereEsq(Nodo* raiz, int infoPai, int infoFilho){
    Nodo *pai, *novo;
    if (raiz != NULL)  // árvore não é vazia
    {
        pai = localiza(raiz, infoPai);    // procura posição de inserção
        if (pai->esq != NULL)
        {
            puts("nodo já possui sub-árvore esquerda");
            return NULL;
        }
        else
        {
            novo = (Nodo*) malloc(sizeof(Nodo));
            novo ->info = infoFilho;
            novo ->esq = NULL;
            novo ->dir = NULL;
            pai->esq = novo;
            return novo;
        }
    }
    else
        return NULL;
}*/

/*Nodo* InsereDir(Nodo* raiz , int infoPai, int infoFilho){
    Nodo *pai, *novo;
    if (raiz != NULL)  // árvore não é vazia
    {
        pai = localiza(raiz, infoPai);    // procura posição de inserção
        if (pai->dir != NULL)
        {
            puts("nodo já possui sub-árvore direita");
            return NULL;
        }
        else
        {
            novo = (Nodo*) malloc(sizeof(Nodo));
            novo->info = ch;
            novo->esq = NULL;
            novo->dir = NULL;
            pai->dir = novo;
            return novo;
        }
    }
    else
        return NULL;
}*/

void preFixadoEsq(Nodo* a){
    if (a!= NULL)
    {
        imprimeDado(a->info);
        preFixadoEsq(a->esq);
        preFixadoEsq(a->dir);
    }
}

void preFixadoDir(Nodo* a){
    if (a!= NULL)
    {
        imprimeDado(a->info);
        preFixadoDir(a->dir);
        preFixadoDir(a->esq);
    }
}

void centralEsq(Nodo* a){
    if (a!= NULL)
    {
        centralEsq(a->esq);
        imprimeDado(a->info);
        centralEsq(a->dir);
    }
}

void centralDir(Nodo* a){
    if (a!= NULL)
    {
        centralDir(a->dir);
        imprimeDado(a->info);
        centralDir(a->esq);
    }
}

void posFixadoEsq(Nodo* a){
    if (a!= NULL)
    {
        posFixadoEsq(a->esq);
        posFixadoEsq(a->dir);
        imprimeDado(a->info);
    }
}

void posFixadoDir(Nodo* a){
    if (a!= NULL)
    {
        posFixadoDir(a->dir);
        posFixadoDir(a->esq);
        imprimeDado(a->info);
    }
}

Nodo* consultaABP(Nodo *a, char chave){
    if(a==NULL)
        return NULL;
    else
        if(a->info==chave)
            return a; //achou retorna o ponteiro para o nó
        else
            if(a->info>chave)
                return consultaABP(a->esq,chave);
            else
                return consultaABP(a->dir,chave);
}

Nodo* InsereArvore(Nodo *a, char ch){
    if(a==NULL){
        a=(Nodo*) malloc(sizeof(Nodo));
        a->info=ch;
        a->esq=NULL;
        a->dir=NULL;
    }
    else{
        if(ch<(a->info))
            a->esq=InsereArvore(a->esq,ch);
        else
            a->dir=InsereArvore(a->dir,ch);
    }
    return a;
}

/*Nodo* remover(Nodo *a, int cod){
    Nodo *aux;
    if(a==NULL){

    }
    else{
        if(aux->info)
    }
}*/
