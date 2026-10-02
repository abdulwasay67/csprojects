#include <iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

};

int main() {
    TreeNode* root = new TreeNode{50, nullptr, nullptr};
    TreeNode* left = new TreeNode{30, nullptr, nullptr};
    TreeNode* right = new TreeNode{70, nullptr, nullptr};

    root->left = left;
    root->right = right;
    TreeNode* current = root;
    
    cout << root->value << endl;
    cout << root->left->value << endl;
    cout << root->right->value << endl;

    delete root;
    delete left;
    delete right;

    return 0;
}


