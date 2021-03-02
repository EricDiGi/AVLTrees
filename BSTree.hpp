#ifndef BSTree_HPP
#define BSTree_HPP

#include <iostream>
#include "Node.hpp"

class BSTree{
    private:
        friend class AVL;
        node* root;
        node* insert(node* apex, int d);
        node* search(node* apex, int d);
        node* parent(node* apex, int d);
    public:
        BSTree();
        ~BSTree();
        void destroy(node* n);
        void insert(int d);
        node* search(int d);
        void trim(int d);
        
};

#endif