typedef struct Node {
    int data;
    Node* next;
}Node;

typedef struct LinkedList {
    Node* head;
    Node* tail;
}LinkedList;

void add_to_empty(LinkedList& ,int);
void add_to_tail(LinkedList&, int);
void traverse(LinkedList&);