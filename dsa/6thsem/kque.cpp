#include<iostream>
using namespace std;

class Kque {
    public:
int n;
int k;
int *arr;
int *front;
int *rear;
int *next;
int freespot;


Kque(int n,int k){
this->n = n;
this->k = k;
front = new int[k];
rear  = new int [k];


//initili -1
for(int i = 0;i<k;i++){
front[i] = -1;
rear[i] = -1;
}

next = new int[n];
for(int i = 0;i<n;i++){
    next[i] = i + 1;
}
next[n -1] = -1;
arr = new int [n];
freespot = 0;
}
//push
void  enque(int data,int qn){
//overflow condition
if(freespot == -1){
    cout<<"NO empty space is present"<<endl;
return ;

}
//find first free inde
int inde = freespot;

//update freespot

freespot = next[inde];


//check wether first ele
if(front[qn -1] == -1){
    front[qn -1] = inde;

}else{
    next[rear[qn - 1]] = inde;

}
//update net
next[inde] = -1;

//update rear

rear[qn -1] = inde;

// push ele

arr[inde] = data;

}
//pop check isempty
int deque(int qn){
//underflow
if(front[qn -1] == -1){
cout<<"queue underflow"<<endl;
return -1 ;
} 

//find inde to top 
int inde = front[qn -1];

//front ko aage badavo
next[qn -1] = next[inde];

//freeslot manage karo
next[inde] = freespot;
freespot = inde;
return arr[inde];

}
};
int main(){

Kque q(10,3);
q.enque(10,1);
q.enque(15,1);
q.enque(20,2);
q.enque(25,1);


cout<<q.deque(1)<<endl;
cout<<q.deque(2)<<endl;
cout<<q.deque(1)<<endl;
cout<<q.deque(1)<<endl;
    return 0;

}