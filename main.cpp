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

    Node* slow = head;
    Node* fast = head;

    while(slow && slow->next && fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return 1;
        }

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