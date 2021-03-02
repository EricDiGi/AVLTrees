#include <iostream>
#include "Node.hpp"
#include "BSTree.hpp"

using namespace std;

BSTree::BSTree(){
    this->root = NULL;
}
BSTree::~BSTree(){
    //destroy(this->root);
    delete this->root;
}
node* BSTree::insert(node* apex, int d){
    if(apex == NULL)
        return (new node(d));
    if(d > apex->data)
        apex->right = insert(apex->right, d);
    else
        apex->left = insert(apex->left, d);
    return apex;
}

void BSTree::insert(int d){
    this->root = insert(this->root, d);
}

node* BSTree::search(node* apex, int d){
    if(apex == NULL || apex->data == d)
        return apex;
    if(d > apex->data)
        return search(apex->right, d);
    else
        return search(apex->left, d);
}

node* BSTree::search(int d){
    node* res = search(this->root, d);
    if(res != NULL)
        return res;
    return new node(-1);
}

void BSTree::destroy(node* n){
    if(n->right != NULL)
        destroy(n->right);
    if(n->left != NULL)
        destroy(n->left);
    //n = NULL;
    delete n;
}

node* BSTree::parent(node* n, int d){
    if((n->left != NULL && n->left->data == d) || (n->right != NULL && n->right->data == d))
        return n;
    if(n->left != NULL)
        return parent(n->left, d);
    if(n->right != NULL)
        return parent(n->right, d);
    return n;
}

void BSTree::trim(int d){
    if(this->root->data == d){
        this->root = NULL;
        return;
    }
    node* n = parent(this->root, d);
    if(n->left != NULL && n->left->data == d)
        n->left = NULL;
    else if(n->right != NULL && n->right->data == d)
        n->right = NULL;
}