 #include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[][3],int a,int b){
  	for(int i = 0;i<a;i++){
 		for(int j = 0;j<b;j++){
 			
 			cout<<" "<<arr[i][j]<<" ";
		 }
		 cout<<endl;
 }
}
void largestsum(int arr1[][3],int a,int b){
 
  int maxi = INT_MIN;
  for(int i = 0;i<a;i++){
     int mi = 0;
 		for(int j = 0;j<b;j++){
 			
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
   	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  print(arr,3,3);
  largestsum(arr,3,3);
return 0;
}
 /*	******row wise sum
 
 int row,col;
 	cout<<"enter rows and colomn"<<endl;
 	cin>>row>>col;
 		cout<<"enter 2D array"<<endl;
 	int arr[row][col] ;
 	  cout<<"take input"<<endl;
 		for(int i = 0;i<row;i++){
 		for(int j = 0;j<col;j++){
 			
 			cin>>arr[i][j];
			  }
 		}
 		for(int i = 0;i<row;i++){
 		for(int j = 0;j<col;j++){
 			
 			cout<<" "<<arr[i][j]<<" ";;
		 }
		 cout<<endl;
 }
 		for(int i = 0;i<row;i++){
		 int min = 0;
 		for(int j = 0;j<col;j++){
 			min += arr[i][j];
 }
 cout<<" "<<min;
}
 	return 0;
 }
  int  ispresent(int arr[][4],int target,int i,int j){
 	for(int i = 0;i<3;i++){
 		for(int j = 0;j<4;j++){
 			
 		if(target == arr[i][j]){
 		return 1;	
}
}
}
	return 0;
 }
 
         cout<<"array  is"<<endl;
	 	for(int i = 0;i<3;i++){
 		for(int j = 0;j<4;j++){
 			
 			cout<<" "<<arr[i][j];
		 }
		 cout<<endl;
 		
	 }
	 while(1){
	 
	 int target;
	 cin>>target;
	 if(ispresent(arr,target,3,4)){
	 	cout<<"target found"<<endl;
	 }
	 else{
	 	cout<<"target not found"<<endl;
}

}
	return 0;
 }

 	int row,col;
 	cout<<"enter rows and colomn"<<endl;
 	cin>>row>>col;
 		cout<<"enter 2D array"<<endl;
 	for(int i = 0;i<row;i++){
 		for(int j = 0;j<col;j++){
 			
 			cin>>arr[i][j];
			  }
 		}
 		   colomn wise input
 			for(int j = 0;j<row;j++){
 		for(int i = 0;i<col;i++){
 			
 			cin>>arr[i][j];
		 }
 		
	 }
	 */
	
 
