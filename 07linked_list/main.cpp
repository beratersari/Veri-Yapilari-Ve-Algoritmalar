#include <iostream>

using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = nullptr;
    }

    void addNode(int data){
        Node* newNode = new Node(data);

        if(head == nullptr){
            head = newNode;
        }else{
            Node* temp = head;

            while (temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void printLinkedList(){
        Node* temp = head;

        while(temp!= nullptr){
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    void deleteNode(int data){
        Node* temp = head;
        Node* prev = nullptr;

        if(temp!= nullptr && temp->data == data){
            head = temp->next;
            delete temp;

        }else{

            while(temp!= nullptr && temp->data != data){

                prev=temp;
                temp=temp->next;
            }

            if(temp== nullptr){
                cout<<"Aranan deger listede bulunamadi."<<endl;
            }else{
                prev->next = temp->next;
            }
        }

    }
};
int main() {
    LinkedList lst;

    lst.addNode(1);
    lst.addNode(4);
    lst.addNode(10);

    lst.printLinkedList();

    lst.addNode(11);
    lst.addNode(3);
    lst.printLinkedList();

    lst.deleteNode(3);
    lst.printLinkedList();

    lst.deleteNode(1);
    lst.printLinkedList();

    lst.deleteNode(14);
    lst.printLinkedList();



    return 0;
}