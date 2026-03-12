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
        
        void insertAtStart(int value) {
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            
            cout << "Inserted " << value << " at begining!" << endl;
        }
        
        void insertAtEnd(int value) {
            Node* newNode =  new Node(value);
            
            if(head == nullptr) {
                head = newNode;
                cout << "Inserted " << value << " at end (list was empty)\n";
                return;
            }
            
            Node* current = head;
            while(current->next != nullptr) {
                current = current->next;
            }
            
            current->next = newNode;
            cout << "Inserted " << value << " at end!" << endl;

        }
};

int main() {
    LinkedList list;
    list.insertAtStart(10);
    list.insertAtEnd(20);
    

    return 0;
}
