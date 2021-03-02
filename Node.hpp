#ifndef Node_HPP
#define Node_HPP

#include <iostream>

class node{
    private:
        friend class BSTree;
        friend class AVL;
        int data;
        node* left;
        node* right;
        int height;
    public:
        node();
        node(int d);
        ~node();
        
        friend std::ostream &operator<< (std::ostream &out, const node &n){
            out << n.data << "-" << n.height;
            return out;
        }

        bool operator>(const int i){
            return this->data > i;
        }
        bool operator<(const int i){
            return this->data < i;
        }
        void operator=(const node &n){
            this->data = n.data;
            this->left = n.left;
            this->right = n.right;
            this->height = n.height;
        }
};


#endif