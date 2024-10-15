#include <iostream>
#include "include/LinkedList.h"

using namespace std;

/**
Node init_empty_node(int data, Node* next) {
    Node newNode;

    newNode.data = data;
    newNode.next = next;

    return newNode;
}
*/


int main() {

    LinkedList l;
    add_to_empty(l, 5);
    add_to_tail(l, 3);

    traverse(l);

    return 0;
}