#ifndef TREE_H
#define TREE_H

#include "tree-node.h"

void insert(struct TreeNode **node, int value) {
    if(*node == NULL) {
        *node = malloc(sizeof(struct TreeNode));
        (*node)->value = value;
        (*node)->left = NULL;
        (*node)->right = NULL;
    }
    else if(value > (*node)->value) insert(&(*node)->right, value);
    else if(value < (*node)->value) insert(&(*node)->left, value);
}

void print_preorder(struct TreeNode *node) {
    if(node == NULL) return;
    print_preorder(node->left);
    printf("%d, ", node->value);
    print_preorder(node->right);
}

void print_postorder(struct TreeNode *node) {
    if(node == NULL) return;
    print_postorder(node->right);
    print_postorder(node->left);
    printf("%d, ", node->value);
}

#endif
