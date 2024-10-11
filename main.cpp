#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* next;
}Node;

Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode -> data = data;
    newNode-> next = nullptr;

    return newNode;
}

Node* findMiddleNode(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next != nullptr) {
        slow = slow->next;
        fast = fast -> next -> next;
    }

    return slow;

}

int main() {

    Node* head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    head -> next -> next -> next = createNode(40);
    head -> next -> next -> next -> next = createNode(50);
    head -> next -> next -> next -> next -> next= createNode(60);

    Node* middleNode = findMiddleNode(head);

    cout << "Middle Node is: " << middleNode->data << endl;

    free(head);

    return 0;
}