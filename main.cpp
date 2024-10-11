#include <iostream>

using namespace std;

typedef struct Node{
    int data;
    Node* next;
} Node;

int main() {

    Node* first = (Node*) malloc(sizeof(Node));
    first -> data = 10;

    Node* second = (Node*) malloc(sizeof(Node));
    second -> data = 20;

    Node* third = (Node*) malloc(sizeof(Node));
    third -> data = 30;

    first -> next = second;
    second -> next  = third;
    third -> next = nullptr;

    cout << "Linked List: " <<endl;

    Node* current = first;

    for(int i=0; i< 3; i++) {
        cout << current->data<<endl;
        current = current->next;
    }

    free(first);
    free(second);
    free(third);

    return 0;
}