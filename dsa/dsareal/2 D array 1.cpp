#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[][3],int a){
  	for(int i = 0;i<a;i++){
 		for(int j = 0;j<3;j++){
 			
 			cout<<" "<<arr[i][j]<<" ";
		 }
		 cout<<endl;
 }
}
void largestsum(int arr1[][3],int a){
 
  int maxi = INT_MIN;
  for(int i = 0;i<a;i++){
     int mi = 0;
 		for(int j = 0;j<3;j++){
 			
 			mi += arr1[i][j];
    }
   cout<<" "<<mi;
    if(mi>maxi){
     maxi = mi;
    }
 }
  cout<<endl;
  cout<<maxi<<endl;;
}
int main() {

  int row,col;
   	cin>>row>>col;
  int arr[row][col];
 	cout<<"enter rows and colomn"<<endl;

 		cout<<"enter 2D array"<<endl;
 	for(int i = 0;i<row;i++){
 		for(int j = 0;j<col;j++){
 			
 			cin>>arr[i][j];
			  }
 		}
  print(arr,row);
  largestsum(arr,row);
return 0;
}
