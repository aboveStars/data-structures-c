#include <iostream>

using namespace std;

typedef struct Node{
    int data;
    Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = nullptr;

    return newNode;
}

int main() {

    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    cout << "Linked List: " <<endl;

    Node* current = head;

    for(int i=0; i< 3; i++) {
        cout << current->data<<endl;
        current = current->next;
    }

    free(head);

    return 0;
}