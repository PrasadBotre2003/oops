#include<iostream>
using namespace std;

int a = 5;
	int start = 0;
	int end = a - 1;
	int mid = start +(end-start)/2;
		int binserch (int arr[], int a,int  key){
			
			if(arr[mid]==key){
				return mid;
				
			}
			if(key > arr[mid]){
				start = mid +1;
			}
			else{
				end = mid - 1;
			}
			mid = start + (end - start)/2;
		}
	
	
	
	

int main(){

	int arr[5]={1,2,3,4,5};
	cout<<"inde is"<<binserch(arr,5,3);
}
