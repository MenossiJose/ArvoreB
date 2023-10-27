#ifndef BST_H
#define BST_H

typedef struct no {
    int total;
    int* chaves;
    struct no** filhos;
    struct no* pai;
} No;

typedef struct arvoreB {
    No* raiz;
    int ordem;
} ArvoreB;


#endif