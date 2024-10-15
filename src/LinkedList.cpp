#include "../include/LinkedList.h"
#include <cstdlib>

#include <iostream>
using namespace std;

void add_to_empty(LinkedList& l, int value) {

    // This new node will be set as a first element to given linkedList
    Node* n =   (Node*) malloc(sizeof(Node));

    // Setting data for new node.
    n->data = value;

    // Setting as a head.
    l.head = n;

    // Setting tail.
    l.tail = l.head;
}
void add_to_tail(LinkedList& l, int value) {
    // Creating new node for tail.
    Node* n =   (Node*) malloc(sizeof(Node));

    // Setting data of new node.
    n->data = value;


    // Setting tail
    l.tail= n;

    // Update head
    l.head->next = n;

}

void traverse(LinkedList& l) {
    Node* current = l.head;

    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
}
