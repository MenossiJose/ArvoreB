
#ifndef ARVOREB_BTREE_H
#define ARVOREB_BTREE_H

#define MAX 3
#define MIN 2

struct BTreeNode {
    int item[MAX + 1], count;
    struct BTreeNode *linker[MAX + 1];
};

struct BTreeNode *root;

struct BTreeNode *createNode(int item, struct BTreeNode *child) {
    struct BTreeNode *newNode;
    newNode = (struct BTreeNode *)malloc(sizeof(struct BTreeNode));
    newNode->item[1] = item;
    newNode->count = 1;
    newNode->linker[0] = root;
    newNode->linker[1] = child;
    return newNode;
}

void addValToNode(int item, int pos, struct BTreeNode *node, struct BTreeNode *child );

int setValueInNode(int item, int *pval,
                   struct BTreeNode *node, struct BTreeNode **child);

void copySuccessor(struct BTreeNode *myNode, int pos);

void removeVal(struct BTreeNode *myNode, int pos);

void rightShift(struct BTreeNode *myNode, int pos);
void leftShift(struct BTreeNode *myNode, int pos);

void adjustNode(struct BTreeNode *myNode, int pos);

int delValFromNode(int item, struct BTreeNode *myNode);

void searching(int item, int *pos, struct BTreeNode *myNode);

void traversal(struct BTreeNode *myNode);

#endif //ARVOREB_BTREE_H

