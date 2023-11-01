#ifndef BST_H
#define BST_H

#define MAX 3

struct BTreeNode {
    int item[MAX + 1], count;
    struct BTreeNode *linker[MAX + 1];
};

struct BTreeNode *root;


#endif