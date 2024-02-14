#include <stdio.h>
#include <stdlib.h>
// #include "list/list.h"
#include "tree/tree.h"

int main() {
    // list
    /*
    struct ListNode *list;
    insert(&list, 1);
    insert(&list, 2);
    insert(&list, 3);
    insert(&list, 4);
    insert(&list, 5);
    print(list);

    printf("\n");
    */

    // tree
    struct TreeNode *tree;

    insert(&tree, 4);
    insert(&tree, 2);
    insert(&tree, 6);
    insert(&tree, 1);
    insert(&tree, 3);
    insert(&tree, 5);
    insert(&tree, 7);

    printf("Preorder: \n");
    print_preorder(tree);
    printf("\n");
    printf("Postorder: \n");
    print_postorder(tree);
    printf("\n");

}
