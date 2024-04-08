#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m){
	 int i = 0;
	 int j = 0;
	 while(i<n){
	 	if(arr1[i]<arr2[j]){
	 		i++;
		 }
		 else if(arr1[i] >arr2[j]){
		 	arr1[i] = arr2[j];
		 	j++;
		 	i++;
		 }
	 }
}
void print(int arr[],int n){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
}
int main(){
	int arr1[6] = {1,2,3,0,0,0};
	int arr2[3] = {2,5,6};
	print(arr1,6);
	merge(arr1,6,arr2,3);
print(arr1,6);
}
