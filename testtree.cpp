#include <iostream>
#include "Node.hpp"
#include "BSTree.hpp"

using namespace std;

int main(){
    BSTree t;
    t.insert(5);
    t.insert(1);
    t.insert(15);
    t.insert(2);
    cout << "NODE: \n";
    cout << *(t.search(2)) << endl;
    cout << *(t.search(15)) << endl;
    cout << *(t.search(1)) << endl;
    cout << *(t.search(5)) << endl;
    t.trim(5);
    cout << "NODE: \n";
    cout << *(t.search(2)) << endl;
    cout << *(t.search(15)) << endl;
    cout << *(t.search(1)) << endl;
    cout << *(t.search(5)) << endl;
}