#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* next;
}Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = nullptr;

    return newNode;

}

int isCircular(Node* head) {
    if(head == nullptr) return -1;

    Node* current = head;
    while(current) {
        if(current->next == head) return 1;
        current = current->next;
    }

   return 0;

}

int main() {

    Node* head = createNode(2);

    head->next = createNode(4);
    head->next->next=createNode(6);
    head->next->next->next= createNode(7);


    int circular = isCircular(head);

    cout << "The node system is " << (circular == 1 ? "Circular" : "Non-Circular") << endl;


    // Making system circular
    head->next->next->next->next = head;

    int circularNew = isCircular(head);

    cout << "After the modification, system is:  " << (circularNew == 1 ? "Circular" : "Non-Circular") << endl;

    free(head);

    return 0;
}