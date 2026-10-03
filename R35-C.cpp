#include <iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

};
TreeNode* search(TreeNode* node, int target) {
    if (node == nullptr) return nullptr;
    if (node->value == target) return node;
    if (target < node->value) return search(node->left, target);
    return search(node->right, target);
}
void inOrder(TreeNode* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    cout << node->value << endl;
    inOrder(node->right);
};
int main() {
    TreeNode* root = new TreeNode{50, nullptr, nullptr};
    TreeNode* left = new TreeNode{30, nullptr, nullptr};
    TreeNode* right = new TreeNode{70, nullptr, nullptr};
    TreeNode* node2 = new TreeNode{25, nullptr, nullptr};
    TreeNode* node3 = new TreeNode{85, nullptr, nullptr};
    TreeNode* node4 = new TreeNode{80, nullptr, nullptr};
    TreeNode* node5 = new TreeNode{15, nullptr, nullptr};

    root->left = left;
    root->right = right;

    left->left = node2;
    right->left = node3;
    right->right = node4;
    left->right = node5;

    inOrder (root);

}