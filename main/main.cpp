#include <iostream>
#include "../lib/bst.hpp"

int main(){
    BST<int>* root = new BST<int>(3);
    BST<int>* node[5] = {new BST<int>(8),new BST<int>(1),new BST<int>(23),new BST<int>(83),new BST<int>(2)};
    root->left = node[1];
    node[1]->right = node[2];
    node[2]->left = node[3];
    BST<int>::inorderTreeWalk(root);
    return 0;
}