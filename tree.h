typedef struct TreeNode {
    struct TreeNode *left;
    struct TreeNode *right;
    int val;
} TreeNode;


TreeNode* new(int val);
void insert(TreeNode* node, int val);
TreeNode* find(TreeNode* node, int val);
void removeT(TreeNode* node, int val);
void printTree(TreeNode* node);
