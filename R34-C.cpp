#include <iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

};
void PAD(TreeNode* node){
    if (node == nullptr) return;
    PAD(node->left);
    PAD(node->right);
    cout << node->value << endl;
    delete node;
}
int main() {
    TreeNode* root = new TreeNode{50, nullptr, nullptr};
    TreeNode* left = new TreeNode{30, nullptr, nullptr};
    TreeNode* right = new TreeNode{70, nullptr, nullptr};
    TreeNode* node2 = new TreeNode{25, nullptr, nullptr};
    TreeNode* node3 = new TreeNode{85, nullptr, nullptr};
    TreeNode* node4 = new TreeNode{10, nullptr, nullptr};
    TreeNode* node5 = new TreeNode{90, nullptr, nullptr};

    root->left = left;
    root->right = right;

    left->left = node2;
    right->left = node3;
    right->right = node4;
    left->right = node5;

    PAD(root);

    return 0;
}

