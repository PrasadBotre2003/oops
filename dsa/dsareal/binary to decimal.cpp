#include <iostream>
#include<math.h>
using namespace std;


int getmax(int arr[],int n){
	int maxi = INT_MIN;
	for(int i = 0;i<n;i++){
	maxi = max(maxi,arr[i]);
//	if(arr[i]>max){
	//	cout<<"maximum no is"<<arr[i];	
//	max = arr[i];
//		}
	}
	return maxi;

}
int getmin(int arr[],int n){
	int mini = INT_MAX;
	for(int i = 0;i<n;i++){
	mini = min(mini,arr[i]);
//	if(arr[i]<min){
	//	cout<<"minimum no is"<<arr[i];	
	//	min = arr[i];
	//	}
	}
	return mini;

}
int  add(int arr[],int n){
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum = sum + arr[i];
		
	}
	return sum;
}

int main() {
	int arr[10];
	int n;
	cin>>n;
	for(int i= 0;i<n;i++){
		cin>>arr[i];

}
		cout<<"minimum no is"<<getmin(arr,n)<<endl;
		cout<<"maximum no is"<< getmax(arr,n)<<endl;
			cout<<"sum is   "<< add(arr,n)<<endl;
		 return 0;
	}
		



	
	
	
	
	
	
	
	
