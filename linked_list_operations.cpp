#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class Linked_List {
public:
    Node* head;
    Linked_List() {
        head = nullptr;
    }
    void insert(int data) {
        
        if (head == nullptr) {
            head = new Node(data);
        }
        else{
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new Node(data);
    }
}
    void deletehead()
    {
        if(head==nullptr){
            cout<<"List already empty"<<endl;
            return;
        }
        Node* temp = head;
        head=head->next;
        delete temp;
        cout<<"Head not deleted"<<endl;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Linked_List list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.deletehead();
    cout<<"After deleting head: ";
    list.display();

    return 0;
}
