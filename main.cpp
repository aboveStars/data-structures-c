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

int getNumberOfOccurrences(Node*head, int number) {
    Node* current = head;

    int occurrences = 0;

    while(current) {
        if(current->data == number) occurrences++;
        current = current->next;
    }

    return occurrences;
}

int main() {

    // 1-2-1-2-1-3-1
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(1);
    head->next->next->next= createNode(2);
    head->next->next->next->next= createNode(1);
    head->next->next->next->next->next=createNode(3);
    head->next->next->next->next->next->next=createNode(1);

    cout << "What number do you want to check? " << endl;

    int key = 0;
    cin >> key;

    if(cin.fail()) {
        cin.clear();
        cin.ignore();

        cout << "Invalid input!" << endl;

        free(head);
        return -1;
    }

    int count = getNumberOfOccurrences(head, key);

    cout << "There are " << count << " occurrences of the " << key << "." << endl;


    free(head);
    return 0;
}