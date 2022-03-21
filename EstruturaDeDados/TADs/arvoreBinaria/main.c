/*Carlos Negri 00333174*/

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(){
    NO *a, *aux;
    int opc = -1, key = 0, procura = 0;
    char info;

    a = criaArvore();
    aux = criaArvore();

    do{
        printf("1 - insere\n2 - caminhamentos esquerda\n3 - caminhamentos direita\n4 - consulta 1 e 2\n0 - sair\n");
        printf("Escolha: ");
        scanf(" %d", &opc);
        switch (opc){
            case 1:
                printf("Info: ");
                scanf(" %c", &info);
                printf("key: ");
                scanf(" %d", &key);
                a = insere(a, info, key);
                break;
            case 2:
                printf("preFixadoEsq\n");
                preFixadoEsq(a);
                printf("centralEsq\n");
                centralEsq(a);
                printf("posFixadoEsq\n");
                posFixadoEsq(a);
                break;
            case 3:
                printf("preFixadoDir\n");
                prefixadoDir(a);
                printf("centralDir\n");
                centralDir(a);
                printf("posFixadoDir\n");
                posFixadoDir(a);
                break;
            case 4:                                 //TODO
                printf("numero procurado: ");
                scanf(" %d", &procura);
                printf("consultaKey1: \n");
                aux = consultaKey1(a, key);
                imprimeNo(aux);
                printf("consultaKey2: \n");
                aux = consultaKey2(a, key);
                imprimeNo(aux);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Escolha uma opção válida\n");
                opc = -1;
                break;
        }
    }while (opc != 0);

    return 0;
}