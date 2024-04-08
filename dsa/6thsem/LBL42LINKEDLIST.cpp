#include<iostream>
using namespace std;


class hero{
int health ;
char ch[100] ;


};
class Node{
    public:
    int data;
    Node *Next;

    Node(int data){
        this->data = data;
        this->Next = 0;
    }
};
int main()
{

   hero h1;
   cout<<"size of h1--->>"<<sizeof(h1)<<endl;
  
     
   // Node* node1 = new Node(100);
    //  cout<<node1->data<<endl;
    //  cout<<node1->Next<<endl;
   



    return 0;
}