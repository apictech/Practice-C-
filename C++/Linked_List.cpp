#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        // Memory free code
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    // create new node
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{  
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = tail->next;
    }  
    
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    // insert at position 1
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }

    // insert at any middle  position
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteHead(Node* &head){
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deleteByPosition(Node* &head, int position){
    if(position == 1){
        deleteHead(head);
    }
    else{
    // Deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void displayHeadTail(Node *head, Node* tail){
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, tail, 99);

    display(head);

    insertAtTail(head, tail, 49);

    insertAtHead(head, tail, 56);
    insertAtHead(head, tail, 52);
    display(head);

    insertAtHead(head, tail, 53);
    insertAtHead(head, tail, 98);
    insertAtHead(head, tail, 76);
    insertAtTail(head, tail, 45);

    insertAtPosition(head, tail, 2, 87);
    display(head);

    deleteHead(head);
    display(head);

    deleteByPosition(head, 3);
    display(head);
    displayHeadTail(head, tail);

    return 0;
}