#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* next;
} Node;


Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = nullptr;

    return newNode;
}

int getLength(Node* head) {
    Node* temp = head;

    int length = 0;
    while(temp) {
        length++;
        temp = temp->next;
    }

    return length;

}

int getMiddleIndex(int length) {
    return length / 2;
}

int main() {

    Node* head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    head -> next -> next -> next  = createNode(40);
    head -> next -> next -> next -> next = createNode(50);
    head -> next -> next -> next -> next -> next= createNode(60);

    int length = getLength(head);

    int middleIndex = getMiddleIndex(length);

    Node* temp = head;
    int currentIndex = 0;

    while(currentIndex != middleIndex) {
        temp = temp -> next;
        currentIndex++;
    }

    cout << "Middle Element: " << temp->data << endl;

    free(head);

    return 0;
}