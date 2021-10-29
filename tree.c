#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create node struct 
    typedef struct node
    {
        int value;
        struct node *left;
        struct node *right;
    }node;
    // declare the insert function
    void insert(struct node *tree, int value){
        if (tree->value == 0){
            tree->value = value;
        }else if(value > tree->value){
            if (tree->right != NULL){
                insert(tree->right, value);
            }else{
                node *right = malloc(sizeof(node));
                tree->right = right;
                tree->right->value = value;
            }
        }else if(value < tree->value){
            if (tree->left != NULL){
                insert(tree->left, value);
            }else{
                node *left = malloc(sizeof(node));
                tree->left = left;
                tree->left->value = value;
            }
        }else{
            tree->value = value;
        }
    }
    // create a tree
    node *tree = malloc(sizeof(node)); // allocate a slot in memory with the size of a node
    // populate the tree
    insert(tree, 12);
    insert(tree, 6);
    insert(tree, 8);
    insert(tree, 18);
    // test
    printf("root  => %d\n", tree->value);
    printf("left  => %d\n", tree->left->value);
    printf("right => %d\n", tree->right->value);
    printf("left's right => %d", tree->left->right->value);
    return 0;
}
