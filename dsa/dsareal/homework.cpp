#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	
	int row = 1;
	while(row<=n){
	int space = row -1;
	while(space){
		cout<<" ";
		space = space - 1;
		
	}
	
	int col = 1;
	while(space <= n){
		cout<<"*";
		col++;
	}
	row++;
	cout<<endl;
}
	}
	
	
	

