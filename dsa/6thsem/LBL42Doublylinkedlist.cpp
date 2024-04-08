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

 
 void InsertAtHead(Node* &head,Node* &tail,int data){
    //empty list
if(head == NULL){
    Node* temp = new Node(data);
    head = temp;
    tail = temp;
}
else{ 
Node* temp = new Node(data);
temp->next = head;
head->prev = temp;
head = temp;
}
 }

void InsertAtTail(Node* &head,Node* &tail,int data){
    //empty list
if(tail == NULL){
Node* temp = new Node(data);
tail = temp;
head = temp;
}
else{
Node* temp = new Node(data);

tail->next = temp;
temp->prev = tail;
tail = temp;
}
 }



void InsertAtPos(Node* &head,Node* &tail,int position ,int data){

if(position == 1){
    InsertAtHead(head,tail,data);
    return ;
}
Node* temp = head;
int cnt = 1;

while(cnt<position-1){
     temp= temp->next ;
    cnt++;
}
if(temp->next == NULL){
    InsertAtTail(head,tail,data);
    return ;
}

Node* AtNode = new Node(data);
AtNode->next = temp->next;
temp->next->prev = AtNode;
temp->next = AtNode;
AtNode->prev = temp;
}


//traverse
 void display(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"  ";
       temp = temp->next;
    }
cout<<endl;
 }
 int getLength(Node* &head){
    int cnt = 0;

     Node* temp = head;
    while(temp!= NULL){
       cnt++;
       temp = temp->next;
    }
return cnt;
 }
void reverselinked(Node* &head){
Node * temp = head;


while(temp != NULL  || temp->next != NULL){
 
temp->next->next = temp;

temp->next = temp ->prev;

temp = temp->next;


}


cout<<"functionn called"<<endl;


}

void DeleteNodePos(int pos,Node * &head,Node* &tail){
    //delete first position 
if(pos == 1){
 Node* temp = head;
 head-> next ->prev = NULL;
 head = temp->next;
 temp->next = NULL;
 delete temp;
}
else{
//delete in between  and last element
Node*curr = head;
Node* prev = NULL;
int cnt = 1;
while(cnt<pos){
prev  = curr;
curr = curr->next;
cnt++;
}
curr->prev = NULL;
prev->next = curr->next;
curr->next = NULL;
if(curr->next  == NULL){
    tail = prev;
}
delete curr;



}




}






int main()
{

Node* node1 = new Node(100);
  Node * head = node1;
   Node * tail = node1;


InsertAtHead(head,tail,500);
  display(head);


InsertAtTail(head,tail,666);
  display(head);

  InsertAtTail(head,tail,666);
  display(head);

  InsertAtTail(head,tail,777);
  display(head);

    InsertAtTail(head,tail,777);
  display(head);


    cout<<"head"<<head->data<<endl;
      cout<<"tail"<<tail->data<<endl;

        display(head);
//DeleteNodePos(5,head,tail);
//cout<<getLength(head)<<endl;

    ///  display(head);
   //   cout<<"head"<<head->data<<endl;
   //   cout<<"tail"<<tail->data<<endl;
    return 0;
}