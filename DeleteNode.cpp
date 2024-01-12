#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the linked list
    void insertNode(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to delete the node before a given node
    void deleteNodeBefore(int key) {
        if (!head || !head->next) {
            std::cout << "Not enough nodes in the list.\n";
            return;
        }

        // Traverse the list to find the node with the given key
        Node* current = head;
        Node* prev = nullptr;
        while (current->next && current->next->data != key) {
            prev = current;
            current = current->next;
        }

        // Check if the key was found
        if (!current->next) {
            std::cout << "Node with key " << key << " not found.\n";
            return;
        }

        // Delete the node before the key
        Node* nodeToDelete = prev ? prev : head;  // If prev is null, delete the head
        if (nodeToDelete == head) {
            head = head->next;
        } else {
            prev->next = current->next;
        }

        delete nodeToDelete;
    }

    // Function to print the linked list
    void printList() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;

    // Insert nodes into the linked list
    myList.insertNode(1);
    myList.insertNode(2);
    myList.insertNode(3);
    myList.insertNode(4);
    myList.insertNode(5);

    std::cout << "Original linked list: ";
    myList.printList();

    // Delete the node before the node with key 3
    myList.deleteNodeBefore(3);

    std::cout << "Linked list after deletion: ";
    myList.printList();

    return 0;
}
