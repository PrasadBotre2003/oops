#include<iostream>

using namespace std;

class Stack{
    public:
int top ;
int *arr;
int s;

Stack(int s){
this-> s =s;
arr = new int[s];
top = -1;


}
void push(int element ){

    if(s - top >1){
 top++;
arr[top] = element;
    }else{
    cout<<"overFlow"<<endl;
    }


}

void pop(){
if(top>0){
    top--;
}
else{
    cout<<"stack under flow"<<endl;
}


}

int peek(){
if(top>=;0){
    return arr[top];

}else{

    cout<<"stack is empty"<<endl;
    return -1;
}

}

bool isEmpty(){
if(top== -1){
    return true;
}else{
    return false;
}



}

};

int main(){

Stack st(5);


st.push(20);
st.push(40);
st.pop();
cout<<st.peek()<<endl;
    return 0;
}