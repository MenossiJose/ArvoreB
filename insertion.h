
#ifndef ARVOREB_INSERTION_H
#define ARVOREB_INSERTION_H
void insertion(int item);
void splitNode(int item, int *pval, int pos, struct BTreeNode *node,
               struct BTreeNode *child, struct BTreeNode **newNode);
#endif //ARVOREB_INSERTION_H
