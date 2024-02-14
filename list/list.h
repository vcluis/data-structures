#ifndef LIST_H
#define LIST_H

#include "list-node.h"

void insert(struct ListNode **node, int value) {
    if(*node == NULL) {
        *node = malloc(sizeof(struct ListNode));
        (*node)->value = value;
        (*node)->next = NULL;
    }
    else insert(&(*node)->next, value);
}

void print(struct ListNode *node) {
    if(node == NULL) return;
    if(node->next == NULL) printf("%d", node->value);
    else printf("%d, ", node->value);
    print(node->next);
}

#endif
