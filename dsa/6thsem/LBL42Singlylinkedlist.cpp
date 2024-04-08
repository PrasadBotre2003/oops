#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
int data;
Node * next;
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

void insertAtTail(Node* & tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;

}
void InsertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
   
}
void display(Node* &head ){
  
    Node* temp = head;

    while(temp != NULL){
      cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtPos(Node* &head,Node* &tail,int position ,int data){

if(position == 1){
    InsertAtHead(head,data);
    return ;
}
Node* temp = head;
int cnt = 1;

while(cnt<position-1){
     temp= temp->next ;
    cnt++;
}
if(temp->next == NULL){
    insertAtTail(tail,data);
    return ;
}

Node* AtNode = new Node(data);
AtNode->next = temp->next;
temp->next = AtNode;
}

void DeleteNodePos(int pos,Node * &head){
    //delete first position 
if(pos == 1){
 Node* temp = head;

 head = head->next;
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

prev->next = curr->next;
curr->next = NULL;
delete curr;

}
}

bool iscircular(Node * &head){

if(head == NULL){
    return true;
}
Node * temp = head->next;

while(temp != NULL && temp != head){
temp = temp->next;


}
if(head == temp){
    return true;
}
return false;




}

bool CheckLoop(Node*  head){
    map<Node* ,bool>visited;
    Node* temp = head;
    
    while(temp!=NULL){
        if(visited[temp] == true){
            cout<<temp->data<<endl;
            return true;
        }             
        visited[temp] = true;
        temp = temp->next;


    }
    return false;


}

Node *  floyedDetectLoop(Node * &head){
Node* fast = head;
Node* slow = head;

if(head == NULL){
    return NULL;
}

while(fast != NULL && slow!= NULL){
fast = fast->next;
if(fast!= NULL){
    fast = fast->next;
}
slow = slow ->next;

if(slow == fast){
     cout<<"loop"<<fast->data<<endl;
    return slow;
}

}
return NULL;


}

Node* getStartNode(Node* &head){

Node* intersection = floyedDetectLoop(head);

Node* slow = head;

while(slow != intersection){
slow = slow->next;
intersection = intersection->next;
}

cout<<"loop start node"<<slow->data<<endl;
return slow;






}
void RemoveLoop(Node* & head){
    Node * startofloop = getStartNode(head);
    Node* temp = startofloop;

    while(temp->next != startofloop){
        temp = temp->next;

    }
    temp->next = NULL;

}



Node * removeDuplicates(Node * head)
{
    if(head == NULL){
        return NULL;
    }
    Node * curr = head;
    while(curr != NULL){
        if( (curr->next != NULL)  &&curr->data == curr->next->data){
           Node* nex_nex = curr->next->next;
           
            
           Node* delete_Node = curr->next;
           delete (delete_Node);
          curr->next = nex_nex;

        }
        else{
            curr = curr->next;
        }
      
    }
return head;



}



int main()
{
      Node *node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
display(head);
insertAtTail(head,20);
display(head);
insertAtTail(head,30);
display(head);
insertAtTail(head,40);
display(head);
insertAtTail(head,50);
display(head);



/*CheckLoop(head);
if(floyedDetectLoop(head) != NULL){

cout<<"cycle is present"<<endl;

}
else{
    cout<<"cycle is not  present"<<endl;
}
*/



    return 0;
}