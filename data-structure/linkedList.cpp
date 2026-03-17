#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
    private:
        Node* head;
    
    public: 
        LinkedList() {
            head = nullptr;
        }
    
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if(head == nullptr) {
            head = newNode;
            return;
        }
        
        Node* current;
        current = head;
        while(current->next !=nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
     
    void printList() {
        Node* current;
        current = head;
        
        if(head == nullptr)  {
            cout << "Empty List." << endl;
            return;
        }
        
        while(current != nullptr) {
            cout << current->data;
            if(current->next != nullptr) {
                cout << " -> ";
            }
            current = current->next;
        }
        cout << endl;

    }
    
    int countNodes() {
        int count = 0;
        Node* current = head;
        while(current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
    
    ~LinkedList() {
        Node* current = head;
        while(current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        cout << "Memory cleaned up." << endl;
    }
};

int main() {
    LinkedList list;
    list.printList();
     
    list.insertAtBeginning(10);
    list.printList();
    list.insertAtEnd(40);
    list.printList();
    list.insertAtBeginning(20);
    list.printList();
    list.insertAtEnd(50);
    
    list.printList();
    
    cout << "List Length: " << list.countNodes() << endl;

    return 0;
}
