
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data ;
Node* left;
Node* right;

Node(int d){

    this->data = d;
    left = NULL;
    right = NULL;
}

};

Node* insertIntoBst(Node* root,int data){

if(root == NULL){
  
  
  root = new Node(data);
    return root;

}


if(data > root->data){


root->right = insertIntoBst(root->right,data);

}
else{
    root->left = insertIntoBst(root->left,data);
}


return root;


}
Node * takeinput(Node* &root){



int data;
cin>>data;


root =  new Node(data);

while(data != -1){
    insertIntoBst(root,data);
   cin>>data;
   

}
return root;
}


void inorder(Node * root){
    if(root == NULL){
        return;
    }
inorder(root->left);
cout<<root->data<<"  " ;
inorder(root->right);
}


void preorder(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
//cout<<root->data<<"  ";
preorder(root->right);
}




void postorder(Node * root){
    if(root == NULL){
        return;
    }


postorder(root->left);
postorder(root->right);
cout<<root->data<<"  ";
}




void levelOrderTraversal(Node* &root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) {   
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}


Node* minimum(Node* root){
   
if(root->left == NULL){
   cout<<"minimum"<<root->data<<endl; 
   return root;
   }

minimum(root->left);

}


Node* max(Node *root){

if(root->right == NULL){
    cout<<"ma"<<root->data<<endl;
    return root;
}else{
    max(root->right);
}

}


Node* DeleteFromBST(Node* root,int val){
if(root == NULL){
    return NULL;

}

if(root->data == val){
// no child
if(root->left == NULL && root->right == NULL){

delete root;

return NULL;

}

if(root->left != NULL  && root->right == NULL){

    Node * temp = root->left ;
    delete root;
    return temp;
}

if(root->left == NULL  && root->right != NULL){

    Node * temp = root->right ;
    delete root;
    return temp;
}


//one child 



//two child

if(root->left != NULL && root->right != NULL){
int mini = minimum(root->right)->data;

root->data = mini;
root->right = DeleteFromBST(root->right,mini);
return root;

}


}

if(root->data>val){


     DeleteFromBST(root->left,val);
     return root;
}

else{
    DeleteFromBST(root->right,val);
return root;
}




}


int main(){
Node * root = NULL;
cout<<"i am prasad";
cout<<"enter tree node"<<endl;
//levelOrderTraversal(root);  
takeinput(root);

Node * temp = root;

levelOrderTraversal(root);


cout<<endl<<"inorder"<<endl;
inorder(root);
cout<<endl;



cout<<endl<<"preorder"<<endl;
preorder(root);
cout<<endl;




cout<<endl<<"postorder"<<endl;
postorder(root);
cout<<endl;
root = temp;
//max(root);

//minimum(root);

DeleteFromBST(root,11);



levelOrderTraversal(root);


cout<<endl<<"inorder"<<endl;
inorder(root);
cout<<endl;



cout<<endl<<"preorder"<<endl;
preorder(root);
cout<<endl;




cout<<endl<<"postorder"<<endl;
postorder(root);
cout<<endl;





return 0;
}