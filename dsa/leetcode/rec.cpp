#include<iostream>
using namespace std;

int recurr(int st ,int ed,int key,int arr[] ){
	
	int s = st;
	int e = ed;
	
	int mid = s + (e- s)/2;
	if(s>e){
		cout<<"elemnt no found"<<endl;
		return 1;
		
			}
	if(arr[mid] == key){
		cout<<"element found"<<endl;
		return 1 ;
	}
	
	
	if(arr[mid]>key){
		recurr(0,mid- 1,key,arr);
	}
	else{
			recurr(mid + 1,e,key,arr);
	}
	
}

int main(){
	int arr[6] = {1,2,3,4,5,6};
	int input;
	while(1){
	
	cin>>input;
   recurr(0,5,input,arr);
}
}
