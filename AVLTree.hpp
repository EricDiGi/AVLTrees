#ifndef AVLTree_HPP
#define AVLTree_HPP

#include <iostream>
#include <vector>
#include "Node.hpp"
#include "BSTree.hpp"

class AVL{
    private:
        BSTree tree;
        node* rotateRight(node* n);
        node* rotateLeft(node* n);
    public:
        AVL();
        void insert(int d);
        node* search(int d);
        void trim(int d);
        int updateHeights(node* n);
};

#endif