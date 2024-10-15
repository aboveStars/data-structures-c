#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* next;
}Node;

void init_node(Node& n, int the_data,  Node* the_next) {
    n.data = the_data;
    n.next = the_next;
}

int main() {
    Node a;
    Node b;
    Node c;

    init_node(a, 10, &b);
    init_node(b, 15, &c);
    init_node(c, 20, nullptr);

    Node* temp = &a;

    while(temp != nullptr) {
        cout << "Data: " << temp->data << endl;
        temp = (temp->next);
    }

    return 0;
}