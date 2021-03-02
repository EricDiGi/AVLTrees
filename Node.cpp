#include <iostream>
#include "Node.hpp"

using namespace std;

node::node(){
    this->data = 0;
    this->left = NULL;
    this->right = NULL;
    this->height = 0;
}

node::node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
    this->height = 0;
}

node::~node(){/*
    if(left != NULL)
        delete left;
    if(right != NULL)
        delete right;*/
    left = NULL;
    right = NULL;
}
