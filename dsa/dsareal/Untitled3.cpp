#include<iostream>
using namespace std;
int bins(int arr[],int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = (start+end)/2;
	
	while(start<=end){
		if(arr[mid]==key){
			return mid;
			cout<<mid<<endl;
		}
		if(key>arr[mid]){
			start = mid + 1;
			
		}		
		else{
			end = mid -1;
			
		}
		int mid = (start+end)/2;
		}
		return -1;
}
int main(){
	int even[6]={2,4,6,8,12,18};
	bins(even,6,18);
//	cout<<"inde of 12"<<inde<<endl;
	return 0;
}
