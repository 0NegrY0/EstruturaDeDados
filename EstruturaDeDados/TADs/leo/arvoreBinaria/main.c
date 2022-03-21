#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
    Nodo *raiz, *consulta;
    int cod, num, opcao;
    char info;

    raiz=inicializa();

    do{
        printf("1-continuar\n0-sair\n");
        scanf("%d", &num);
        if(num!=0){
            printf("<0> sair\n<1> insere ordenadamente\n<2> consulta\n<3> pre fixado\n<4> centro\n<5> pos fixado\n");
            scanf("%d",&opcao);
            switch(opcao){
                case 0: num=0; break;
                case 1: //leDados(&info);
                        printf("Insira o codigo:");
                        scanf(" %c", &info);
                        raiz=InsereArvore(raiz, info); break;
                case 2: printf("Insira o codigo:");
                        scanf(" %c", &info);
                        consulta=consultaABP(raiz, info);
                        imprimeDado(consulta->info);
                        break;
                case 3: printf("\n<0> esq\n<1> dir\n");
                        scanf(" %d", &opcao);
                        if(opcao==1)
                            preFixadoDir(raiz);
                        else
                            preFixadoEsq(raiz);
                        break;
                case 4: printf("\n<0> esq\n<1> dir\n");
                        scanf(" %d", &opcao);
                        if(opcao==1)
                            centralDir(raiz);
                        else
                            centralEsq(raiz);
                        break;
                case 5: printf("\n<0> esq\n<1> dir\n");
                        scanf(" %d", &opcao);
                        if(opcao==1)
                            posFixadoDir(raiz);
                        else
                            posFixadoEsq(raiz);
                        break;
                //case 6: insereRaiz(raiz); break;
                default: printf("Opcao invalida!\n");break;
            }
        }
    }while(num!=0);
    return 0;
}

