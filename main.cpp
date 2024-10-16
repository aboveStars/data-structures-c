#include <iostream>

using namespace std;


typedef struct Node {
    int data;
    Node* next;
}Node;

Node* createNode(int data) {

    Node* newNode =  (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = nullptr;

    return newNode;

}

int countLinkedList(Node* head) {

    Node* current = head->next;

    int count = 1;

    while(current != nullptr && current != head) {
        count++;
        current = current->next;
    }

    return count;
}


int main() {

    Node* head = createNode(1);

    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next= createNode(6);
    //head->next->next->next->next->next->next = head;

    int count = countLinkedList(head);
    cout << "Count: " << count << endl;




    free(head);


    return 0;
}