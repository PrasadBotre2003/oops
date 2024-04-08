#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
~Node(){
    int value = this->data;
if(this->next != NULL){
    delete next;
  this->next= NULL;
 
}
cout<<"memory is free for the node with data"<<value<<endl;

}
    
};


void InsertNode(Node* &tail,int element,int data){
    //assume its empty
    if(tail == NULL){
        Node * NewNode = new Node(data);
        tail = NewNode;
   
        NewNode->next = NewNode;
    }
    else{
        //assume element is already present
        //not empty 
     Node* curr = tail;
     while(curr->data != element){
        curr = curr->next;
     }
     Node* temp = new Node(data);
     temp->next = curr->next;
     curr->prev = temp;
     curr->next = temp;
     temp->prev = curr;


    }
}






void print(Node* tail){
    if(tail == NULL){
        cout<<"list is empty"<<endl;
    }
Node *temp = tail;
do{
    cout<<tail->data<<" ";

    tail = tail->next;
}
while(tail != temp);
cout<<endl;
}

int main()
{
   Node* node = new Node(100);
    Node* tail = NULL;
    print(tail);
    InsertNode(tail,100,200);
    print(tail);
    return 0;
}