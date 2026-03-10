// Online C++ compiler to run C++ program online
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
        
        void insertAtBeggining(int value) {
            Node* newNode = new Node(value);
            
            newNode->next = head;
            head = newNode;
            
            cout << "Inserted " << value << " at beginning." << endl;
        }
};


int main() {
    LinkedList List;
    List.insertAtBeggining(10);

    return 0;
}
