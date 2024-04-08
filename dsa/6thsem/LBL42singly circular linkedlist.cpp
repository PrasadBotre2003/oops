#include<iostream>
using namespace std;
//singly circular linkedlist
class Node{
    public:
    int data;
    Node* next;
Node(int data){
this->data = data;
this->next = NULL;
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
curr->next = temp;


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

void DeleteNode(Node* &tail,int element){
//if nulll
if(tail == NULL){
    cout<<"list is empty"<<endl;
    return;
}
//Not Nullll
else{
Node * prev = tail;
Node * curr = tail->next;

while(curr ->data != element){
    prev  =  curr;
    curr = curr->next;
}
if(tail == curr){
    tail = prev;
}
if(curr == prev){
    tail = NULL;
}
prev ->next = curr->next;
curr->next = NULL;
delete curr;


}

}

int main()
{
//Node* node1 = new Node(100);
Node* tail = NULL;
Node* head  = NULL;
InsertNode(tail,3,5);
print(tail);


InsertNode(tail,5,6);
print(tail);


InsertNode(tail,6,7);
print(tail);


InsertNode(tail,7,8);
print(tail);

InsertNode(tail,6,500);
print(tail);

DeleteNode(tail,8);
print(tail);
    return 0;
}