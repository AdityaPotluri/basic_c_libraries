#include <stdlib.h>
#include <stdio.h>
#include "tree.h"


TreeNode * new(int val) {
    TreeNode * node = (TreeNode*) malloc(sizeof(TreeNode));
    if (!node) return NULL;
    node->val = val;
    return node;
}

void insert(TreeNode * node, int val) {
    if (!node) return;
    else if (node->val == val) return;
    else if (val > node->val && !node->right) {
        node->right = new(val);
    }
    else if (val < node->val && !node->left) {
        node->left = new(val);
    }
    else if (val > node->val && node->right) {
        insert(node->right, val);
    }
    else if (val < node->val && node->left) {
        insert(node->left, val);
    }
}

void printTree(TreeNode * node) {
    if(node) {
        printf("%d\n", node->val);
    }
    if(node->left) {
        printTree(node->left);
    } if(node->right) {
        printTree(node->right);
    }
}

int main(int argc, char ** argv) {
    TreeNode * node = new (3);
    for(int i = 0; i < 11; i++) {
        insert(node, i);
    }
    TreeNode* ten = find(node, 10);
    return 0;
}

TreeNode* find(TreeNode* node, int val) {
    if(node == NULL) {
        return NULL;
    }
    if(val == node->val) {
        return node;
    } else if (node->right) {
        if (val > node->val) {
            find(node->right, val);
            printf("%d\n\n", node->val);
        }
    } else if (node->left) {
        if (val < node->val) {
            find(node->left, val);
        }
    }
    return NULL;
}

// fix find successors
void removeT(TreeNode* node, int val) {
    if(node == NULL) {
        return;
    }
    if(val == node->val) {
        return;
    } else if (node->right) {
        if (val > node->val) {
            find(node->right, val);
        }
    } else if (node->left) {
        if (val < node->val) {
            find(node->left, val);
        }
    }
    return;
}