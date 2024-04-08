#include<bits/stdc++.h>
using namespace std;

int first(int *arr,int n,int x){
 int l  = 0;
 int h = n -1;
 int ans =0;
 int mid;
 while(l<=h){
 	mid = l + (h -l)/2;
 	if(arr[mid]==x){
 		ans = mid;
 		h = mid - 1;
	 }
	 else if(arr[mid]<x){
	 	l = mid + 1;
	 }
 	
 	else{
 		h = mid -1;
	 }
 }
 return ans;
}
int last(int *arr,int n,int x){
int l  = 0;
 int h = n -1;
 int ans =0;
 int mid;
 while(l<=h){
 	mid = l + (h -l)/2;
 	if(arr[mid]==x){
 		ans = mid;
 		l = mid + 1;
 	
	 }
	 else if(arr[mid]<x){
	 	l = mid + 1;
	 }
 	
 	else{
 		h = mid -1;
	 }
 }
 return ans;
}
 


int main(){
	int arr[10] = {1,1,1,2,2,2,3,3,3,3};
	int a =first(arr,10,3);
	int b = last(arr,10,3);
cout<<"lastpos"<<a<<endl;
	cout<<"firstpos"<<b<<endl;
	int c =  (b - a) + 1;
	cout<<"number of occurance are three"<<c<<endl;
	
	
	
	
	
	
	return 0;
	
	
	
	
}

