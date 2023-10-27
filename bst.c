#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

No* criaNo(ArvoreB* arvore){
    int max = arvore -> ordem * 2;
    No* no = malloc(sizeof(No));

    no -> pai = NULL;

    no -> chaves = malloc(sizeof(int) * (max+1));
    no -> filhos = malloc(sizeof(int) * (max+2));
    no -> total = 0;

    for(int i=0; i<max+1; i++){
        no -> filhos[i] = NULL;
    }
    return no;
}

ArvoreB* criaArvore(int ordem){
    ArvoreB* a = malloc(sizeof(ArvoreB));
    a -> ordem = ordem;
    a -> raiz = criaNo(a);
    return a;
}



