#include<iostream>
using namespace std;
void moves(int arr[],int n){

//	while()
	for(int i = 0 ; i< n; i++){
		int j =  i +1;
		for(int j = i+1;j<n;j++){
			if(arr[i]==0&&arr[j]!=0){
				swap(arr[i],arr[j]);
			
			}
		}
	
	}
}
	

void display(int arr[],int n){
	for(int i = 0;i<n; i++){
		cout<<arr[i];
	}
}

int main(){
	int arr[] = {0,2,0,0,0,1,4};
	moves(arr,7);
	display(arr,7);
	
}
