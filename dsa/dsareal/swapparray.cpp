#include<iostream>
using namespace std;
void print(int arr[],int s){
	for(int i =0;i<s;i++){
		cout<<arr[i]<<" ";
	}
}
void swap(int arr[],int s){
	for(int i= 0;i<s;i+=2){
	int temp  = arr[i];
	arr[i]= arr[i+1];
	temp = arr[i+1];
	}
}
int main(){
	int even[6]={1,2,3,4,5,6};
	int odd[7]= {10,20,30,40,50,60,70};
cout<<"before swapping"<<endl;

	print(odd,6);
	swap(odd,6);
	cout<<"after swapping"<<endl;
	print(odd,6);
}
