#include <iostream>
#include "Node.hpp"
#include "BSTree.hpp"
#include "AVLTree.hpp"

using namespace std;

int main(){
    AVL a;
    a.insert(4);
    a.insert(2);
    a.insert(1);
    cout << "NODES:\n";
    cout << *(a.search(1)) << endl;
    cout << *(a.search(2)) << endl;
    cout << *(a.search(4)) << endl;
}