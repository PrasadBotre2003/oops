#include <iostream>
#include<math.h>
using namespace std;
int reverse(int arr[],int n){
	
	int start = 0;
	int end = n-1;
	while(start<=end){
	
	swap(arr[start],arr[end]);
	start++;
	end--;
}
	
	
}



printarray(int arr[],int n){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";

	}
		cout<<endl;
}

int main(){
	int arr[5] = {2,33,55,66,77};
	int brr[7] = {11,22,33,44,55,76,56};
	reverse(arr,5);
	reverse(brr,7);
	
	printarray(arr,5);
	printarray(brr,7);
	
	
}
