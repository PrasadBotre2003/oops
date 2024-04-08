#include<iostream>
using namespace std;
//DAY 4
void bubblesort(int * arr,int n){
	
	
	if(n == 1|| n == 0){
		return ;	
	}
	
	for(int i = 0;i<n -1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	
	bubblesort(arr,n - 1);
		
}

void display(int * arr,int n){
		for(int i = 0;i<n;i++){
			cout<<arr[i]<<"  ";
		}cout<<endl;
}
/*
int power(int a,int  b){

	
	if(b == 0)
	return 0;
	
	if(b ==1){
		return a;
	}
	
int ans = 	power(a,b/2);
	
	if(a % 2 == 0){
		return ans * ans;	
}
else{
return a*ans*ans;	
}

}

int  reverse(string s,int n){
	int si = s.size();
	if(si ==n){
		return 1;
	}
int temp = s[0];


	
	return revers(s+1,n -1);
}




//DAY 3
void print(int *arr,int s,int e){
	
		
				cout<<"array"<<endl;
				for(int i = s;i<=e;i++){
					cout<<arr[i]<<" ";
				}
		cout<<endl;
}

int binaryserch(int *arr,int s,int e,int k){
	print(arr,s,e);
	int mid  = s + (e - s)/2;
	if(s>e){
		return false;
	}
	if(arr[mid] == k){
		return true;
	}
	if(arr[mid]<k){
		return binaryserch(arr,mid+1,e,k);
	}
	else{
		return binaryserch(arr,0,mid-1,k);
	}
	
}
int linearserch(int *arr,int n,int key){
//	print(arr,n);
		int found;
	if(n == 0){
		return 0;
	}

	if(arr[0]==key){
		return true;
	}
	else{
	
 found = linearserch(arr+1,n-1,key);
}
	return found;
	
}
int sum(int *arr,int n){
	int s = 0;
if(n == 0){
		return 0;
	}	
	if(n==1){
		return arr[0];
	}
	int ans = sum(arr+1,n - 1);
	s = arr[0] + ans;
	return s;
}
int issorted(int *arr,int n){
	int sort;
	if(n == 0 || n == 1){
		return true;
	}

	if(arr[0]>arr[1]){
		return false;
	}
	else{
	
	sort =  issorted(arr+1,n - 1);
}
	return sort;
		
}
*/
int main(){

int arr[14] = {9,8,7,4,5,6,1,2,3};
//int ans =linearserch(arr,6,100);
//cout<<binaryserch(arr,0,13,1)<<endl;
//string s = "prasadshantarambotre";
//reverse(s,19);
//int a,b;
//cin>>a>>b;
//cout<<power(a,b)<<endl;
display(arr,9);
bubblesort(arr,9);
display(arr,9);
}

