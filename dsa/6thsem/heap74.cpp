#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class heap{
public:
int si ;
int arr[100];


heap(){
    arr[0] = -1;
    si = 0;
}



void insert(int val){

si = si + 1;
int inde = si;

arr[inde] = val;


while(inde>1){
int parent = inde /2;


if(arr[inde]>arr[parent]){
    swap(arr[inde],arr[parent]);
    inde = parent;


}else{
    return ;
}

}



}


void print(){
    for(int i = 1;i<=si;i++){
cout<<arr[i]<<" ";
    }cout<<endl;
}


void deletion(){

if(si == 0){
    cout<<"nothing to delete"<<endl;
    return;
}

arr[1] = arr[si];
si--;


int i =1;

while(i<si){
int leftinde = 2 * i;
int rightinde = 2 * i + 1;

if(leftinde < si &&  arr[i]<arr[leftinde]){
    swap(arr[leftinde],arr[i]);
   i = leftinde;   

}
else if(rightinde<si && arr[i]<arr[rightinde]){
swap(arr[i],arr[rightinde]);
i = rightinde;



}else{
    return ;
}


}
}



};



void hepify(int  *arr,int n,int i){
int largest = i;
int left = 2 * i;
int right = 2 * i + 1;



if(left <= n && arr[largest]<arr[left]){
    largest = left;
    }
if(right <= n && arr[largest]<arr[right]){

    largest = right;
}



if(largest != i){
    swap(arr[largest],arr[i]);
    hepify(arr,n,largest);
}
}


void heapSort(int arr[],int n){
int si = n;
   while(si>1){
    swap(arr[si],arr[1]);
    si--;
    hepify(arr,si,1);
   }


}
int main(){
 /*
heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();

h.deletion();

h.print();

int arr[6]  = {-1,54,53,55,52,50};
int n = 5;
for(int i = 1;i<=n;i++){
    cout<<arr[i]<<" ";
}


for(int i = n / 2;i>0;i--){
    hepify(arr,n,i);
}
cout<<"printing array"<<endl;

for(int i = 1;i<=n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

cout<<"sorted "<<endl;

heapSort(arr,n);

for(int i = 1;i<=n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;


return 0;

*/

// max_heap;
priority_queue<int>pq;
pq.push(10);
pq.push(20);

pq.push(30);
pq.push(60);

pq.push(50);

cout<<"top "<<pq.top()<<endl;
pq.pop();
cout<<"top "<<pq.top()<<endl;

// min_heap


priority_queue<int,vector<int>,greater<int>>minHeap;


minHeap.push(10);


minHeap.push(15);


minHeap.push(9);


minHeap.push(100);


minHeap.push(10000);


cout<<"min top"<<minHeap.top()<<endl;
















}

