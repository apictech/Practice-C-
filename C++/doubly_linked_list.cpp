#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node *next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    // Destructor
    // ~Node(){
    //     int value = this->data;
    //     // Memory free code
    //     if(this->next != NULL){
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout<<"Memory is free for data "<<value<<endl;
    // }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{ 
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;}
}

void insertAtTail(Node* head, Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    // If position is 1

    if(position == 1){
        insertAtHead(head, tail, data);
    }

    // Creating a temporary node
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // If position is last
    if(temp->next == NULL){
        insertAtTail(head, tail, data);
    }

    // For any middle position

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}


int getLength(Node* &head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }

    return length;
}

void display(Node* &head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(15);
    Node* head = node1;
    Node* tail = node1;
    display(head);

    insertAtHead(head, tail, 76);
    display(head);
    
    insertAtHead(head,tail, 25);
    display(head);

    insertAtHead(head, tail, 30);
    display(head);

    insertAtHead(head, tail, 99);
    display(head);

    insertAtTail(head, tail, 22);
    display(head);

    insertAtPosition(head, tail, 3, 87);
    display(head);



    return 0;

}