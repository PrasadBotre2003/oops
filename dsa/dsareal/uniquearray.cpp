#include<iostream>
using namespace std;
int uniquearray(int arr[],int s){
int ans = 0;
	for(int i = 1;i<=s;i++){
	ans = ans^arr[i];	
	}
	cout<<ans<<endl;
	return ans;
	
}



int main(){
	int arr[8]  = {1,2,1,3,4,5,3,4};
	uniquearray(arr,8);
	
	
	
	
	
	
	
	
	
	
	
}
