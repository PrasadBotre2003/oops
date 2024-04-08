#include <iostream>
#include <math.h>
using namespace std;
void alterswap(int arr[],int s){
for(int i = 0;i<s;i+=2){
 if(i+1 <s){
   //swap(arr[i],arr[i+1]);
   int temp = arr[i];
   arr[i] = arr[i+1];
   arr[i+1] = temp;
 }
}
}
void display(int arr[],int s){
for(int i = 0;i<s;i++){

  cout<<arr[i]<<" ";
}
cout<<endl;  
}
int main() {
int n;
int arr[n];
cout<<"enter the no of element"<<endl;
cin>>n;

for(int i = 0;i<n;i++){
	cin>>arr[i];
	}
  alterswap(arr,n);
  display(arr,n);
 }
