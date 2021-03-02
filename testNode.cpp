#include <iostream>
#include "Node.hpp"

using namespace std;


int main(){
    node* a = new node(5);
    int b = 1;
    cout << (*a > b) << endl;
}