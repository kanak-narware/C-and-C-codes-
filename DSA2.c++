#include <iostream>
using namespace std;

// Definition of a Node
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize node
    Node(int val) : data(val), next(nullptr) {}
};

// Linked List Class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert a new node at the front of the list
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert a new node at the tail of the list
    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Print all elements in the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Destructor to clean up memory and prevent leaks
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList list;
    
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtHead(5);  // List becomes: 5 -> 10 -> 20 -> NULL
    list.insertAtTail(30); // List becomes: 5 -> 10 -> 20 -> 30 -> NULL

    cout << "Linked List elements:\n";
    list.display();

    return 0;
}
