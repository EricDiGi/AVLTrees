#include <iostream>
#include "Node.hpp"
#include "AVLTree.hpp"

using namespace std;

AVL::AVL(){
    this->tree = BSTree();
}

void AVL::insert(int d){
    this->tree.insert(d);
    //Update heights
    updateHeights(tree.root);
    //Check balance

    //Fix balance
    //https://www.geeksforgeeks.org/avl-tree-set-1-insertion/
}

node* AVL::search(int d){
    return this->tree.search(d);
}

void AVL::trim(int d){
    this->tree.trim(d);
}

int AVL::updateHeights(node* n){
    if(n == NULL)
        return 0;
    int hl = updateHeights(n->left);
    int hr = updateHeights(n->right);
    n->height = (hl-hr);
    return 1+n->height;
}

node* AVL::rotateRight(node* n){
    node* a = n->left;
    node* b = a->right;
    a->right = n;
    n->left = b;
    updateHeights(a);
    return a;
}

node* AVL::rotateLeft(node* n){
    node* a = n->right;
    node* b = a->left;
    a->left = n;
    n->right = b;
    updateHeights(a);
    return a;
}